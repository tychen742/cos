# Quality Checklist

## Book-Level Review

- [ ] The chapter sequence respects concept dependencies.
- [ ] Terminology stays consistent across chapters.
- [ ] Repeated examples and exercises build familiarity without accidental duplication.
- [ ] Scope boundaries stay visible when new topics are proposed.

## Chapter Review

- [ ] `ORGANIZATION.md` states reader prerequisites and learning outcomes.
- [ ] Sections appear in a pedagogically sound order.
- [ ] Examples appear in the same order as the concepts they require.
- [ ] Exercises use only material already taught or clearly scaffolded.
- [ ] Important mistakes and misconceptions have a teaching response.
- [ ] Deferred topics are recorded instead of half-explained.
- [ ] The chapter summary matches the chapter outcomes.

## C Example Review

- [ ] Runnable examples compile as documented.
- [ ] Verification uses warnings, currently `cc -Wall -Wextra -Wpedantic -std=c11`.
- [ ] Shown output matches actual output when output is part of the lesson.
- [ ] Format specifiers, pointer examples, array bounds, and memory ownership are correct.
- [ ] Intentional errors or warnings are labeled and isolated.
- [ ] Code uses the simplest construct that teaches the intended concept.

## Exercise Review

- [ ] Practice starts small before asking for synthesis.
- [ ] Questions state the expected behavior clearly.
- [ ] Solutions, checks, or review notes exist where the format requires them.
- [ ] Exercise difficulty matches the chapter contract.
