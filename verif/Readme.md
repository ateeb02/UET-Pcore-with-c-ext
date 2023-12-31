# Pcore Testing Using RISCOF
Pcore uses the [RISCOF](https://riscof.readthedocs.io/en/stable/index.html) which is python-based standard RISC-V Architectural Compatibility Test Framework. This framework runs the Compatibility tests in real-time on DUT and Reference and compare the signature results generated by both to decide if the tests are passed.
In our case, DUT is Pcore and reference is the [sail-riscv](https://github.com/riscv/sail-riscv), which is the golden model for the formal specification of RISC-V architecture.

## Prerequisites

After completing the steps in [Getting Started](/README.md) guide, follow the following steps.

- Install python3, pip3 and RISCOF

        sudo apt-get install python3
        pip3 install --upgrade pip
        pip3 install -U riscof

    Check that if RISCOF is installed correctly by running `riscof --version`

- Install [SAIL-RISCV](https://github.com/riscv/sail-riscv). The sail model can be built from source by following [these](https://riscof.readthedocs.io/en/stable/installation.html#install-plugin-models) instructions. However, pre-built model can be used directly which is available along the instructions in [bin](/verif/bin/) directory.

:warning: Pre-build SAIL model might get outdated. So, it recommended to [build](https://riscof.readthedocs.io/en/stable/installation.html#install-plugin-models) it from source..

- [riscv-arch-test](https://github.com/riscv-non-isa/riscv-arch-test) are added as submodule  in this repository. Run the following command to clone the arch-tests as submodule

        git submodule update --init


## Running Compatibility tests

Run the following command from this ([verif](/verif/)) directory.

    riscof run --config=config.ini \
               --suite=riscv-arch-test/riscv-test-suite/ \
               --env=riscv-arch-test/riscv-test-suite/env 

It will run the tests defined by ISA string `RV32IM` in pcore_isa.yaml. At the end, RISCOF will generate a report describing the pass/fail status of the tests. `riscof_work` directory will be created containg the report and the artifacts of DUT and Reference model.

:bulb: GitHub actions runs the ACTs and generate [test report](https://github.com/ee-uet/UETRV-PCore/actions/runs/5382274503)