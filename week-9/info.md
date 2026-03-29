# Week 9

## Aim
Write a YACC program to validate an arithmetic expression for the grammar `E -> E + T | T`, `T -> T * F | F`, `F -> (E) | id`.

## Files
- `program.l`
- `program.y`

## Performing Steps
1. Write the LEX rules to recognize identifiers, numbers, operators, and brackets.
2. Write the YACC grammar for expression validation.
3. Generate `lex.yy.c`, `y.tab.c`, and `y.tab.h`.
4. Compile the generated files and run the parser.

## How To Run
```powershell
cd week-9
bison -y -d -o y.tab.c program.y
flex -o lex.yy.c program.l
gcc lex.yy.c y.tab.c -o program
.\program.exe
```

## Sample Input
```text
a+3*(b-2)
```
