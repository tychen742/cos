# Style Guide

## Teaching Voice

- Explain the purpose of a construct before its variations.
- Prefer concrete, small examples before richer applications.
- Name deferred ideas explicitly instead of smuggling them into early examples.
- Keep conceptual explanations precise without assuming the reader already knows C vocabulary.

## Chapter Shape

- Start from the chapter contract in `ORGANIZATION.md`.
- Move from a minimal example to controlled variations and then practice.
- Keep one main teaching idea per early example.
- Add common mistakes where C behavior is easy to misunderstand.

## Examples

- Examples should compile as shown unless they are explicitly marked as broken examples.
- Prefer names such as `count`, `total`, `scores`, `name`, and `values` over names that hide the teaching point.
- Use `1`, `2`, `3`, names such as `Alice` and `Bob`, and simple strings when domain context would distract.
- Use richer cases when they motivate the construct better than a toy example.
- Keep output labels clear enough that readers can connect output to source code.

## C Conventions

- Use a consistent modern standard for verification, currently `-std=c11`.
- Compile teaching examples with warnings enabled during review.
- Use correct `printf` format specifiers.
- Use `%zu` for `sizeof` results.
- Use `%p` with `(void *)` when printing pointer values.
- Do not teach undefined behavior as a clever shortcut.
- Call out implementation-defined or platform-dependent details when they matter.

## Planning Files

- `MATERIALS.md` is the inventory: notes, examples, datasets or scenarios, pitfalls, exercises, and references.
- `ORGANIZATION.md` is the editorial contract: prerequisites, outcomes, section order, example order, deferred topics, and review checks.
- Keep book-wide rules here and in `QUALITY_CHECKLIST.md`; keep chapter-specific choices in `chapters/*`.
