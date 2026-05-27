# Chapter 03 Materials: Operators

## Current Material

- arithmetic operator overview: `+`, `-`, `*`, `/`, `%`, `++`, `--`;
- assignment operator overview: `=`, `+=`, `-=`, `*=`, `/=`, `%=`;
- comparison operator overview: `==`, `!=`, `>`, `<`, `>=`, `<=`;
- logical operator overview: `&&`, `||`, `!`;
- short bitwise operator preview: `&`, `|`, `^`;
- modulus and decrement examples.

## Week-Sized Expansion

The chapter should become an "expressions and boolean logic" week rather than a
quick operator catalog. The main goal is for students to trace expressions
accurately before they use those expressions inside `if` statements and loops.

### 1. Arithmetic Expressions

- review arithmetic expressions with integer values;
- show integer division separately from floating-point division;
- use `%` for remainder problems:
  - even or odd numbers;
  - divisibility checks;
  - converting total seconds into hours, minutes, and seconds;
  - grouping items into full boxes plus leftovers;
- emphasize that `/` and `%` with integers discard the fractional part instead
  of rounding.

### 2. Assignment and Update Operators

- explain assignment as storing a value, not testing equality;
- show that assignment expressions change the variable on the left;
- compare these equivalent forms:
  - `x = x + 1;`
  - `x += 1;`
  - `x++;`
- include examples for `+=`, `-=`, `*=`, `/=`, and `%=`;
- trace prefix and postfix increment or decrement:
  - `x++` uses the old value, then updates;
  - `++x` updates first, then uses the new value;
  - avoid mixing multiple increments of the same variable in one expression.

### 3. Comparisons and Boolean Values

- introduce comparison expressions as expressions that evaluate to true or
  false;
- connect C's printed values for true and false to `1` and `0`;
- use `stdbool.h` and `bool` for readable boolean variables;
- compare values using:
  - equality and inequality: `==`, `!=`;
  - ordering: `>`, `<`, `>=`, `<=`;
- include examples that store comparison results in variables:
  - `bool passing = score >= 60;`
  - `bool in_range = value >= min && value <= max;`

### 4. Logical Operators

- combine comparison expressions with `&&`, `||`, and `!`;
- use examples that prepare students for Chapter 4:
  - passing a course: `average >= 60 && absences <= 3`;
  - valid input range: `choice >= 1 && choice <= 4`;
  - discount eligibility: `is_member || total >= 100`;
- demonstrate short-circuit evaluation:
  - with `&&`, C stops when the left side is false;
  - with `||`, C stops when the left side is true;
  - this matters when the right side has a calculation that should only happen
    sometimes.

### 5. Precedence and Parentheses

- teach only the precedence rules students need immediately:
  - arithmetic before comparison;
  - comparison before logical `&&` and `||`;
  - `&&` before `||`;
  - assignment happens late;
- use parentheses whenever they make the expression easier to read;
- include examples where the result changes:
  - `2 + 3 * 4` versus `(2 + 3) * 4`;
  - `a || b && c` versus `(a || b) && c`;
- include examples where parentheses do not change the result but improve
  clarity:
  - `(score >= 60) && (absences <= 3)`.

### 6. Bitwise Preview

- keep bitwise operators short unless a later lab uses flags or masks;
- clearly separate bitwise and logical operators:
  - `&&` and `||` combine truth values;
  - `&`, `|`, and `^` operate on individual bits;
- use small numbers with binary comments:
  - `5 & 3` because `0101 & 0011` gives `0001`;
  - `5 | 3` because `0101 | 0011` gives `0111`;
  - `5 ^ 3` because different bits become `1`.

## Suggested Example Files

- `01_operators.c`: keep as the broad overview.
- `02_arithmetic_modulus.c`: integer division, `%`, even or odd, time
  conversion.
- `03_assignment_update.c`: compound assignment plus prefix and postfix tracing.
- `04_boolean_expressions.c`: comparisons, `bool`, logical operators, reusable
  conditions for Chapter 4.
- `05_precedence.c`: expression tracing and parentheses.
- `06_bitwise_preview.c`: short optional bitwise demonstration.

## Practice Problems

- Predict the output before running a program with `x++`, `++x`, `x--`, and
  `--x`.
- Convert a number of seconds into hours, minutes, and seconds.
- Given `score`, `absences`, and `late_work`, write boolean expressions for
  course status.
- Decide whether a number is divisible by 2, 3, 5, or 10.
- Rewrite long expressions with parentheses so their meaning is clear.
- Given values for `a`, `b`, and `c`, evaluate expressions using `&&`, `||`, and
  `!` by hand.

## Lab Ideas

- **Time converter:** read a total number of seconds and print hours, minutes,
  and seconds using `/` and `%`.
- **Grade checker:** compute whether a student passes using score and attendance
  thresholds. Save the boolean expression for reuse in Chapter 4.
- **Checkout calculator:** update a running subtotal with compound assignment,
  compute tax, and test whether a discount applies.
- **Input validator preview:** read an integer choice and compute whether it is
  inside an allowed menu range. Do not branch yet; just print the boolean result.

## Checkpoints

- Students can explain the difference between `=` and `==`.
- Students can predict integer division and modulus results.
- Students can trace prefix and postfix increment or decrement.
- Students can write readable boolean expressions with comparisons and logical
  operators.
- Students can add parentheses to make expression intent clear.
- Students can explain why bitwise `&` is not the same as logical `&&`.

## Candidate Additions

- add the suggested example files above;
- add a short tracing worksheet for expression evaluation;
- add a lab handout for the time converter or grade checker;
- reuse one Chapter 3 boolean expression in Chapter 4 conditionals;
- compile examples with warnings enabled so suspicious assignments inside
  conditions are easier to catch.

## Common Mistakes

- confusing assignment with comparison;
- reading increment or decrement examples without tracking value changes;
- expecting integer division to keep the fractional part;
- assuming `%` means percentage instead of remainder;
- writing expressions that rely on memorized precedence instead of clear
  parentheses;
- assuming bitwise operators are the same as logical operators;
- writing long boolean expressions without testing smaller pieces first.
