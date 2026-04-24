# ICLAD Docker development environment

This directory contains a **Dockerfile** that builds a reproducible RTL / synthesis toolchain image: Icarus Verilog, Yosys, Verilator 4.218, FuseSoC, OpenSTA, sv2v, and related build dependencies.

## Prerequisites

- [Docker Engine](https://docs.docker.com/engine/install/) (or Docker Desktop) installed and running
- Enough disk space and time for the first build (cloning and compiling several tools from source)
- For **Yosys synthesis and OpenSTA** flows: the **ASAP7** standard-cell library under `techlib/` (see [ASAP7 standard-cell library (techlib)](#asap7-standard-cell-library-techlib) below)

---

## ASAP7 standard-cell library (techlib)

Synthesis and STA scripts in this repo expect the OpenROAD ASAP7 kit at:

`techlib/asap7sc7p5t_28/LIB/NLDM/`

([The-OpenROAD-Project/asap7sc7p5t_28](https://github.com/The-OpenROAD-Project/asap7sc7p5t_28.git) — BSD-3-Clause.)

### Clone into `techlib`

From the **repository root** (`docker_env_designs/`, i.e. parent of `ENV_PREPARATION.md`):

```bash
mkdir -p techlib
git clone https://github.com/The-OpenROAD-Project/asap7sc7p5t_28.git techlib/asap7sc7p5t_28
```

If you already cloned elsewhere, symlink or move it so the path above exists.

### Decompress NLDM liberty archives (`.lib.7z`)

Upstream ships NLDM libraries as **7-Zip** archives (for example `asap7sc7p5t_AO_RVT_TT_nldm_211120.lib.7z`). Yosys and OpenSTA need plain `.lib` files next to (or instead of) those archives.

Install **p7zip** if needed:

- Debian / Ubuntu: `sudo apt-get install -y p7zip-full`
- RHEL / Rocky / Alma: `sudo dnf install -y p7zip p7zip-plugins` (package names may vary; you need the `7z` or `7za` binary)

From the repo root, extract every `*.lib.7z` in `LIB/NLDM`:

```bash
cd techlib/asap7sc7p5t_28/LIB/NLDM
for f in *.lib.7z; do
  [ -f "$f" ] || continue
  7z x -y "$f"
done
cd -
```

This writes each `*.lib` into the same directory. If `7z` is not on your `PATH`, try `7za` instead (same arguments).

**Optional:** remove the archives after a successful extract to save disk space:

```bash
cd techlib/asap7sc7p5t_28/LIB/NLDM
rm -f *.lib.7z
cd -
```

If the repository already contains only uncompressed `*.lib` files, skip the extract step.

### Override path (optional)

If the library lives somewhere else, set:

```bash
export ASAP7_LIB_DIR=/path/to/asap7sc7p5t_28/LIB/NLDM
```

Many `yosys_syn/run_sta.tcl` and `syn.tcl` flows default to `/workspace/techlib/asap7sc7p5t_28/LIB/NLDM` inside Docker when `ASAP7_LIB_DIR` is unset—keep the mount layout consistent with that if you use the provided container recipe.

## Build the image (from source)

From this directory (the same folder as `Dockerfile`):

```bash
docker build -t iclad-dev:v1 .
```

This README standardizes on the tag `iclad-dev:v1`; use a different tag only if your team’s workflow requires it.

## Run an interactive shell (recommended for new users)

Start a container with an interactive Bash session. Mount your **host** checkout of this repo into `/workspace` inside the container so you can edit on the host and run tools in the container:

```bash
docker run --rm -it \
  -v "$(pwd):/workspace" \
  -w /workspace \
  iclad-dev:v1
```

- **`--rm`**: remove the container when you exit (keeps your disk tidy).
- **`-it`**: interactive terminal (TTY + stdin).
- **`-v "$(pwd):/workspace"`**: current directory on the host becomes `/workspace` in the container (matches the image `WORKDIR`).
- **`-w /workspace`**: start in the project root inside the container.

When the shell starts, verify tools if you like:

```bash
iverilog -V
verilator --version
yosys --version
fusesoc --version
sta -version
sv2v --version
```

Type `exit` to leave the container.

### Optional: run a one-off command without a shell

```bash
docker run --rm \
  -v "$(pwd):/workspace" \
  -w /workspace \
  iclad-dev:v1 \
  yosys --version
```

## Using a pre-built image (no local build)

If your team publishes the image to a registry (for example Docker Hub or GitHub Container Registry), pull it and run the same `docker run` command, replacing `iclad-dev:v1` with the published image name (for example `yourorg/iclad-dev:v1`).

## Troubleshooting

- **Permission errors on mounted files**: files created in the container may be owned by `root` on the host. Run builds as a user-mapped container only if your site requires it; otherwise adjust ownership on the host or use a dedicated clone for Docker work.
- **Build fails (network / git)**: the image clones several repositories during `docker build`; ensure the build environment has outbound HTTPS access.
