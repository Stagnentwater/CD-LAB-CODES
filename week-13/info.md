# Week 13

## Aim
Write a YACC program to evaluate an algebraic expression.

## Files
- `calc.l`
- `calc.y`

## Performing Steps
1. Write token rules for numbers and operators in `calc.l`.
2. Write the expression grammar and actions in `calc.y`.
3. Generate C code using Flex and Bison.
4. Compile and run the calculator, then enter an expression.

## How To Run
```powershell
cd week-13
bison -y -d -o y.tab.c calc.y
flex -o lex.yy.c calc.l
gcc lex.yy.c y.tab.c -o calc
.\calc.exe
```

## Sample Input
```text
5+3*(2+1)
```
