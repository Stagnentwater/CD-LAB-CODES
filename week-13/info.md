# Week 13

## Aim
Write a YACC program to check whether an arithmetic expression is valid for the grammar `E -> E+T | E-T | T`, `T -> T*F | T/F | F`, `F -> (E) | id | num`.

## Files
- `program.l`
- `program.y`

## Performing Steps
1. Write token rules for identifiers, numbers, and operators.
2. Write the grammar in YACC form.
3. Generate C code using Flex and Bison.
4. Compile and run the parser, then enter an expression.

## How To Run
```powershell
cd week-13
bison -y -d -o y.tab.c program.y
flex -o lex.yy.c program.l
gcc lex.yy.c y.tab.c -o program
.\program.exe
```

## Sample Input
```text
a+3*(b-2)
```

## Sample Output
```text
Valid Expression
```
