# Book Plan

## Title

C for Computational Systems

## Subtitle

Programming, memory, operating-system interfaces, and reproducible native software

## Audience

This book is for college-level beginners who need a careful introduction to C as both a programming language and a foundation for understanding compiled programs, memory, files, and program structure.

## Book Promise

Readers will learn C by building a working mental model of how compiled programs use memory, interact with operating-system resources, and become portable, testable software artifacts.

## Reader Starting Point

- No prior C experience is required.
- Basic comfort using files and a terminal can be introduced in Chapter 1 when needed.
- Prior programming experience may help but should not be assumed for core explanations.

## Reader End State

Readers should be able to:

- compile and run C programs with warnings enabled;
- use values, variables, expressions, branches, loops, arrays, strings, and functions;
- explain addresses, pointers, structs, enums, dynamic memory, and file I/O at an introductory level;
- split a small program into readable source files and headers;
- recognize common C mistakes involving formatting, bounds, lifetimes, ownership, and error handling.

## Book Perspective

The book teaches beginner C through a computational-systems lens. Every major concept should point toward a systems question about representation, control flow, memory, interfaces, operating-system resources, native builds, or reproducibility.

Book-level framing lives in `authoring/PREFACE.md`. Chapter labs should turn that framing into bounded practice that prepares readers for the final project families.

## Chapter Sequence

| Chapter | Folder | Responsibility |
| --- | --- | --- |
| 1 | `chapters/01_intro` | Establish C program shape, output, comments, input, compilation |
| 2 | `chapters/02_variables_types` | Establish values, variables, primitive types, formatting, conversion |
| 3 | `chapters/03_operators` | Build expression vocabulary and boolean reasoning |
| 4 | `chapters/04_conditionals` | Introduce decision-making constructs |
| 5 | `chapters/05_loops` | Introduce repetition and controlled traversal |
| 6 | `chapters/06_arrays_strings` | Store and traverse fixed collections and character data |
| 7 | `chapters/07_functions` | Decompose programs with parameters, returns, scope, recursion |
| 8 | `chapters/08_pointers` | Introduce addresses, dereferencing, pointer parameters, arrays |
| 9 | `chapters/09_structs_enums` | Model data with user-defined types |
| 10 | `chapters/10_dynamic_memory` | Allocate, own, resize, and free runtime storage |
| 11 | `chapters/11_files` | Read, write, close, and handle file errors |
| 12 | `chapters/12_projects` | Combine source files, headers, libraries, builds, dependencies, tests, and final projects |

## Recurring Chapter Artifacts

- focused runnable examples;
- a bounded systems lab that reuses earlier concepts and prepares a final project path;
- a chapter landing summary when prose drafting starts;
- exercises that require only already-taught material;
- common-mistake notes for concepts that produce recurring beginner errors;
- chapter planning files: `MATERIALS.md` and `ORGANIZATION.md`.

## Scope Boundaries

- Teach standard introductory C before platform-specific APIs.
- Introduce systems ideas only when they support reader understanding of C programs.
- Defer advanced preprocessing, concurrency, networking, industrial build systems, and deep operating-system internals unless a lab or project needs a bounded preview.

## Systems Lab Thread

Early chapters should keep the lab thread beginner-friendly:

- source file versus executable;
- compiler warnings;
- what a type controls;
- bytes and representation;
- exit status;
- standard input, standard output, and standard error.

Middle chapters should make the systems perspective clearer:

- stack frames at an introductory level;
- arrays versus pointers without oversimplifying;
- string storage and null termination;
- function interfaces and contracts;
- structs as memory layouts, not just containers.

Later chapters should add practical native-software skills:

- heap allocation and ownership;
- file descriptors or streams according to the files chapter choice;
- multi-file programs;
- headers and declarations;
- separate compilation;
- linking;
- static versus shared libraries at a conceptual level;
- build flags and reproducible compile commands.

## Open Editorial Decisions

- Decide whether the final manuscript will live in Markdown, notebooks, or another book build system.
- Decide whether Chapter 1 uses terminal compilation only or also documents an editor workflow.
- Decide how much command-line argument handling belongs before the project chapter.
- Decide whether the files lab teaches standard streams first and defers file descriptors, or uses file descriptors as a bounded operating-system interface preview.
