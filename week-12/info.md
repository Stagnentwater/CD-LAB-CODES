# Week 12

## Aim
Write a YACC program to implement a small top-down style parse for strings made of one or more `a` characters followed by optional `b` characters.

## Files
- `ab.l`
- `ab.y`

## Performing Steps
1. Write the grammar in `ab.y`.
2. Write token rules in `ab.l`.
3. Generate parser files using Bison and Flex.
4. Compile and run the parser, then enter a string such as `aaaabb`.

## How To Run
```powershell
cd week-12
bison -y -d -o y.tab.c ab.y
flex -o lex.yy.c ab.l
gcc lex.yy.c y.tab.c -o ab
.\ab.exe
```

## Sample Input
```text
aaaabb
```
