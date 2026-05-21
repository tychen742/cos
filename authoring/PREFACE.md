# Preface

This book teaches beginner C through computational systems. It uses the language fundamentals to ask what a compiled program represents, how data moves through memory, where operating-system resources enter a program, and what makes native software portable and reproducible.

## The Systems Lens

Every major C concept should point toward a systems question.

| C Topic | Systems Lens |
| --- | --- |
| variables and types | representation, size, layout |
| operators | machine-level cost and correctness |
| conditionals and loops | control flow and performance |
| arrays and strings | contiguous memory and bounds |
| functions | call boundaries and modularity |
| pointers | addresses, ownership, interfaces |
| structs and enums | data layout and APIs |
| dynamic memory | lifetimes, leaks, allocation cost |
| files | persistence, streams, OS resources |
| multi-file projects | headers, compilation units, linking |
| packaging | dependencies, portability, reproducibility |

That gives the book a more distinctive purpose than another syntax-first introduction to C.

## Why It Matters Now

In the AI era, C remains valuable for at least five reasons.

### Systems Literacy

AI can generate code, but it does not remove memory models, filesystems, ABI boundaries, compilers, or performance tradeoffs.

### Native Performance

HPC, inference runtimes, numerical kernels, databases, media systems, embedded software, and operating systems still depend heavily on C and C++-level thinking.

### Interoperability

Python, R, Julia, Rust, and many AI and data tools call native libraries. Readers who understand C can reason about foreign-function interfaces, headers, shared libraries, and why installation fails.

### Debugging Dependency Problems

Packaging failures often come from compiled extensions, missing headers, mismatched library versions, architecture differences, linker paths, or incompatible ABIs.

### Reproducibility

A program is not just source code. It is source plus compiler, flags, libraries, platform assumptions, input data, and build process.

## Book Promise

Readers will learn C by building a working mental model of how compiled programs use memory, interact with operating-system resources, and become portable, testable software artifacts.
