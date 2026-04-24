#!/usr/bin/env bash
# OpenTitan KMAC — Verilator pre_dv testbench via FuseSoC.
#
# FuseSoC core: lowrisc:dv_verilator:kmac_reduced_tb (toplevel: kmac_reduced_tb)
# Depends on lowrisc:dv:digestpp_dpi for the reference model.
#
# Prerequisites: FuseSoC, Verilator, C++17, digestpp DPI build (via FuseSoC).
#
# Usage:
#   ./run_verilator_tb.sh [--dry-run|-n] [steps...]
#   ./run_verilator_tb.sh --help
#
# Steps (default: env build run): env | build | run | all | lint | clean
#
# Environment:
#   VERILATOR   (default: /home/scratch.chiatungh_nvresearch/verilator/bin/verilator)
#   FUSESOC     (default: fusesoc)
#   WORK_ROOT   (default: $SCRIPT_DIR/obj_fusesoc)

set -euo pipefail

DRY_RUN=0
STEPS=()

usage() {
    cat <<'EOF'
KMAC Verilator pre_dv (reduced core): ./run_verilator_tb.sh [options] [steps...]

Options:
  --dry-run, -n    Print commands only
  -h, --help       This help

Steps: env | build | run | all | lint | clean
Default: env build run

FuseSoC core: lowrisc:dv_verilator:kmac_reduced_tb
Environment: VERILATOR, FUSESOC, WORK_ROOT
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
REPO_TOP="$(cd "$SCRIPT_DIR/../../../.." && pwd)"

VERILATOR="${VERILATOR:-/home/scratch.chiatungh_nvresearch/verilator/bin/verilator}"
FUSESOC="${FUSESOC:-fusesoc}"
WORK_ROOT="${WORK_ROOT:-$SCRIPT_DIR/obj_fusesoc}"

FUSESOC_CORE="lowrisc:dv_verilator:kmac_reduced_tb"
SIM_EXE="Vkmac_reduced_tb"

quote() { printf '%q' "$1"; }

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
    STEPS=(env build run)
fi

step_env() {
    echo "╔══════════════════════════════════════════════════════════════════╗"
    echo "║            KMAC (reduced) Verilator Testbench                    ║"
    echo "╚══════════════════════════════════════════════════════════════════╝"
    echo "[env] KMAC_PRE_DV  = $(quote "$SCRIPT_DIR")"
    echo "[env] REPO_TOP     = $(quote "$REPO_TOP")"
    echo "[env] VERILATOR    = $(quote "$VERILATOR")"
    echo "[env] FUSESOC      = $(quote "$FUSESOC")"
    echo "[env] WORK_ROOT    = $(quote "$WORK_ROOT")"
    echo "[env] FUSESOC_CORE = $FUSESOC_CORE"
    echo "[env] SIM_EXE      = $SIM_EXE"
    if [[ "$DRY_RUN" -eq 0 ]]; then
        echo ""
        [[ -x "$VERILATOR" ]] && run "$VERILATOR" --version || echo "[env] WARNING: Verilator not found" >&2
        command -v "$FUSESOC" >/dev/null 2>&1 && run "$FUSESOC" --version || \
            echo "[env] WARNING: fusesoc not on PATH" >&2
    fi
}

step_build() {
    echo ""
    echo "╔══════════════════════════════════════════════════════════════════╗"
    echo "║                    Building Verilator Model                      ║"
    echo "╚══════════════════════════════════════════════════════════════════╝"
    if [[ "$DRY_RUN" -eq 1 ]]; then
        echo "$ cd $(quote "$REPO_TOP")"
    else
        export PATH="$(dirname "$VERILATOR"):$PATH"
        cd "$REPO_TOP"
    fi
    cmd=(
        "$FUSESOC" --cores-root=. run --build
        --work-root="$WORK_ROOT"
        --target=default
        --tool=verilator
        "$FUSESOC_CORE"
    )
    echo "[build] $FUSESOC_CORE (target=default)"
    run "${cmd[@]}"
}

find_sim_exe() {
    local paths=(
        "$WORK_ROOT/$SIM_EXE"
        "$WORK_ROOT/default-verilator/$SIM_EXE"
        "$WORK_ROOT/sim-verilator/$SIM_EXE"
    )
    for path in "${paths[@]}"; do
        if [[ -x "$path" ]]; then
            echo "$path"
            return 0
        fi
    done
    return 1
}

step_run() {
    echo ""
    echo "╔══════════════════════════════════════════════════════════════════╗"
    echo "║                    Running Simulation                            ║"
    echo "╚══════════════════════════════════════════════════════════════════╝"
    local sim_exe
    if [[ "$DRY_RUN" -eq 1 ]]; then
        echo "$ $(quote "$WORK_ROOT/$SIM_EXE")"
        return 0
    fi
    sim_exe=$(find_sim_exe) || {
        echo "[run] ERROR: $SIM_EXE not found under $WORK_ROOT" >&2
        exit 1
    }
    cd "$(dirname "$sim_exe")"
    echo "[run] $sim_exe"
    echo ""
    local ret=0
    "$sim_exe" || ret=$?
    echo ""
    [[ $ret -eq 0 ]] && echo "SIMULATION PASSED" || echo "SIMULATION FAILED (exit $ret)"
    return $ret
}

step_lint() {
    echo "[lint] kmac_reduced_tb.core has no dedicated lint target; skipping."
}

step_clean() {
    echo "[clean] rm -rf $(quote "$WORK_ROOT")"
    [[ "$DRY_RUN" -eq 1 ]] || rm -rf "$WORK_ROOT"
}

step_all() {
    step_build || return $?
    step_run || return $?
}

FINAL_RET=0
for s in "${STEPS[@]}"; do
    case "$s" in
    env) step_env ;;
    build) step_build ;;
    run) step_run || FINAL_RET=$? ;;
    all) step_all || FINAL_RET=$? ;;
    lint) step_lint ;;
    clean) step_clean ;;
    *)
        echo "Unknown step: $s" >&2
        exit 1
        ;;
    esac
done

[[ "$DRY_RUN" -eq 1 ]] && echo "(dry-run)"
exit $FINAL_RET
