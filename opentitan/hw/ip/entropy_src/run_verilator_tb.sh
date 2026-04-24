#!/usr/bin/env bash
# OpenTitan entropy_src — Verilator flow (OSS) via FuseSoC.
#
# This IP is wired for Verilator *lint* in hw/ip/entropy_src/entropy_src.core.
# The block UVM environment (dv/tb/tb.sv) is aimed at VCS/Xcelium upstream, not
# Verilator; this script does not build that testbench.
#
# Prerequisites:
#   - FuseSoC (e.g. pip install fusesoc) on PATH as `fusesoc`, or set FUSESOC.
#   - Verilator (default path below); directory is prepended to PATH for the run.
#
# Usage:
#   ./run_verilator_tb.sh [--dry-run|-n] [steps...]
#   ./run_verilator_tb.sh --help
#
# Options:
#   --dry-run, -n   Print commands only (no FuseSoC / no rm).
#   --help, -h      Show this help.
#
# Steps (default: env lint):
#   env     Show REPO_TOP, VERILATOR, work root, and FuseSoC resolution.
#   lint    FuseSoC: Verilator lint-only on lowrisc:ip:entropy_src (strict -Wall).
#   lint-relaxed  Same as lint but suppresses WIDTH warnings (common in OT RTL).
#   clean   Remove WORK_ROOT (default: ./obj_fusesoc_lint under this directory).
#
# Environment:
#   VERILATOR   Verilator binary (default: /home/scratch.chiatungh_nvresearch/verilator/bin/verilator)
#   FUSESOC     FuseSoC launcher (default: fusesoc)
#   WORK_ROOT   FuseSoC --work-root (default: $SCRIPT_DIR/obj_fusesoc_lint)

set -euo pipefail

DRY_RUN=0
STEPS=()

usage() {
	cat <<'EOF'
entropy_src Verilator helper: ./run_verilator_tb.sh [--dry-run|-n] [steps...]
  Steps: env | lint | lint-relaxed | clean
  Default: env lint
  Env: VERILATOR, FUSESOC, WORK_ROOT
EOF
}

while [[ $# -gt 0 ]]; do
	case "$1" in
	--dry-run | -n) DRY_RUN=1 ;;
	-h | --help)
		usage
		exit 0
		;;
	--)
		shift
		STEPS+=("$@")
		break
		;;
	-*)
		echo "Unknown option: $1" >&2
		usage >&2
		exit 1
		;;
	*)
		STEPS+=("$1")
		;;
	esac
	shift
done

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# hw/ip/entropy_src -> OpenTitan repository root
REPO_TOP="$(cd "$SCRIPT_DIR/../../.." && pwd)"

VERILATOR="${VERILATOR:-/home/scratch.chiatungh_nvresearch/verilator/bin/verilator}"
FUSESOC="${FUSESOC:-fusesoc}"
WORK_ROOT="${WORK_ROOT:-$SCRIPT_DIR/obj_fusesoc_lint}"

# FuseSoC core for this block (see entropy_src.core)
FUSESOC_CORE="${FUSESOC_CORE:-lowrisc:ip:entropy_src:0.1}"

# --- helpers (dry-run style similar to snitch_cluster/run_verilator_tb.sh) ---

quote() {
	printf '%q' "$1"
}

run() {
	if [[ "$DRY_RUN" -eq 1 ]]; then
		printf '$ '
		printf '%q ' "$@"
		printf '\n'
	else
		"$@"
	fi
}

if [[ ${#STEPS[@]} -eq 0 ]]; then
	STEPS=(env lint)
fi

step_env() {
	echo "[env] ENTROPY_SRC_DIR=$(quote "$SCRIPT_DIR")"
	echo "[env] REPO_TOP=$(quote "$REPO_TOP")"
	echo "[env] VERILATOR=$(quote "$VERILATOR")"
	echo "[env] FUSESOC=$(quote "$FUSESOC")"
	echo "[env] WORK_ROOT=$(quote "$WORK_ROOT")"
	echo "[env] FUSESOC_CORE=$(quote "$FUSESOC_CORE")"
	if [[ "$DRY_RUN" -eq 1 ]]; then
		echo "[env] PATH=$(quote "$(dirname "$VERILATOR")"):\$PATH"
	else
		run "$VERILATOR" --version
		if command -v "$FUSESOC" >/dev/null 2>&1; then
			run "$FUSESOC" --version
		else
			echo "[env] WARNING: $(quote "$FUSESOC") not found on PATH. Install with: pip install fusesoc" >&2
		fi
	fi
}

step_lint() {
	_do_lint ""
}

step_lint_relaxed() {
	_do_lint "--verilator_options=-Wno-WIDTH --verilator_options=-Wno-fatal"
}

_do_lint() {
	local extra_opts="$1"
	if [[ "$DRY_RUN" -eq 1 ]]; then
		echo "cd $(quote "$REPO_TOP")"
		echo "export PATH=$(quote "$(dirname "$VERILATOR")"):\$PATH"
	fi
	# entropy_src.core: target lint, default_tool verilator, mode lint-only
	cmd=(
		"$FUSESOC"
		--cores-root=.
		run
		--work-root="$WORK_ROOT"
		--target=lint
		--tool=verilator
	)
	# Append extra verilator options if provided
	if [[ -n "$extra_opts" ]]; then
		# shellcheck disable=SC2086
		cmd+=($extra_opts)
	fi
	cmd+=("$FUSESOC_CORE")
	if [[ "$DRY_RUN" -eq 0 ]]; then
		export PATH="$(dirname "$VERILATOR"):$PATH"
		cd "$REPO_TOP"
	fi
	local label="lint"
	[[ -n "$extra_opts" ]] && label="lint-relaxed"
	echo "[$label] FuseSoC Verilator lint: $FUSESOC_CORE (work-root: $WORK_ROOT)"
	run "${cmd[@]}"
}

step_clean() {
	echo "[clean] rm -rf $WORK_ROOT"
	if [[ "$DRY_RUN" -eq 1 ]]; then
		printf '$ rm -rf %q\n' "$WORK_ROOT"
	else
		rm -rf "$WORK_ROOT"
	fi
}

STEP_NUM=0
for s in "${STEPS[@]}"; do
	if [[ "$STEP_NUM" -gt 0 ]]; then
		echo
	fi
	STEP_NUM=$((STEP_NUM + 1))
	case "$s" in
	env) step_env ;;
	lint) step_lint ;;
	lint-relaxed) step_lint_relaxed ;;
	clean) step_clean ;;
	*)
		echo "Unknown step: $s (use: env lint lint-relaxed clean)" >&2
		exit 1
		;;
	esac
done

if [[ "$DRY_RUN" -eq 1 ]]; then
	echo "(dry-run: no commands executed)"
else
	echo "Done."
fi
