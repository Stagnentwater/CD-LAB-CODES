# Week 9

## Aim
Write a recursive descent parser for the grammar `E -> T E'`, `E' -> + T E' | e`, `T -> F T'`, `T' -> * F T' | e`, `F -> (E) | id`.

## Files
- `program.c`

## Performing Steps
1. Remove left recursion from the original grammar.
2. Create one function for each non-terminal.
3. Read the input string.
4. Call the start symbol function and check whether the full string is consumed.

## How To Run
```powershell
cd week-9
gcc program.c -o program
.\program.exe
```

## Sample Input
```text
a+b*c
```
