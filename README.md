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