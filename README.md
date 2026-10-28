# minicc

A C-subset optimizing compiler targeting RV32IM, with its own two-pass assembler and a
5-stage pipelined simulator.

**The thesis.** Compilers are tuned for machines with gigabytes. On an FPGA soft core the
binding constraint is instruction memory, not speed, so minicc optimizes for **code size**
and treats the space-time tradeoff as the thing to measure rather than the thing to hide.

**The target.** A RISC-V soft core on a DE1-SoC gets a slice of the Cyclone V's on-chip
block RAM as instruction memory. Budget: **32 KB**. The headline question is how many of
the 30 benchmark programs fit.

**Baselines.** `clang -O0`, `-O1`, and `-Os` for size and speed. Correctness is established
independently by diffing every generated binary against Spike, instruction for instruction.

Status: in progress, started 2026-09-21. Twelve weekly milestones, feature freeze
2026-12-06. This README is replaced by the generated benchmark table at the freeze.

## Build and test

Requires CMake and a C++ compiler. doctest is vendored under `test/third_party`, so
there is nothing else to install.

```sh
cmake -S . -B build              # configure
cmake --build build              # build minicc and unit_tests
ctest --test-dir build -C Debug  # run the unit tests
```

`-C Debug` is needed with multi-config generators such as Visual Studio (the Windows
default); without it ctest reports the test as "not available without configuration".
On single-config generators (Ninja, Makefiles) it is harmless.
