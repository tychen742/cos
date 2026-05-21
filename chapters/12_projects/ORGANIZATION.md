# Chapter 12 Organization: Projects

## Chapter Goal

Show how earlier chapters combine into a small maintainable C program.

## Learning Outcomes

- Navigate a multi-file C program.
- Compile a program that uses headers and multiple sources.
- Explain the role of compilation units, linking, build flags, and a minimal build workflow.
- Recognize where dependencies and reproducibility constraints enter native software.
- Verify behavior with a documented check.

## Sequence

1. Project brief and requirements.
2. File layout and headers.
3. Declarations, source files, compilation units, and linking.
4. Implementation slices.
5. Build flags, reproducible compile commands, and a minimal Makefile or equivalent workflow.
6. Library, dependency, and packaging failure cases.
7. Build and verification.
8. Reflection on tradeoffs and next study directions.

## Systems Lab

Complete one final project path by combining a small C library, a command-line client, a buildable or swappable dependency, documented verification, packaging and reproducibility notes, and a small set of why-this-build-failed debugging cases.

## Final Project Families

- Text and data processing tool: read CSV-like input, compute summaries, and write output.
- Tiny numerical kernel: build matrix or vector operations with timing, memory-layout discussion, and compiler flags.
- C library plus Python caller: expose a small native library boundary for a data or AI-facing workflow.
- Dependency-aware CLI: build and diagnose a command-line program that uses a small external library.

## Deliberately Deferred

- industrial build-system coverage beyond the minimal workflow needed to make native build behavior visible;
- large framework integration.
