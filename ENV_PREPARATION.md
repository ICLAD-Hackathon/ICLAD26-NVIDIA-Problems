# ICLAD Docker development environment

This directory contains a **Dockerfile** that builds a reproducible RTL / synthesis toolchain image: Icarus Verilog, Yosys, Verilator 4.218, FuseSoC, OpenSTA, sv2v, and related build dependencies.

## Prerequisites

- [Docker Engine](https://docs.docker.com/engine/install/) (or Docker Desktop) installed and running
- Enough disk space and time for the first build (cloning and compiling several tools from source)

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
