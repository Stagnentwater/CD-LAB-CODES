# Week 4

## Aim
Convert a BNF rule into YACC form and generate a small abstract syntax tree for an arithmetic expression.

## Files
- `ast.l`
- `ast.y`

## Performing Steps
1. Write the scanner rules in `ast.l`.
2. Write the grammar and AST node creation code in `ast.y`.
3. Generate parser files using Bison and Flex.
4. Compile and run the parser, then enter an arithmetic expression like `3+5*(10-2)`.

## How To Run
```powershell
cd week-4
bison -y -d -o y.tab.c ast.y
flex -o lex.yy.c ast.l
gcc lex.yy.c y.tab.c -o ast
.\ast.exe
```

## Sample Input
```text
3+5*(10-2)
```
