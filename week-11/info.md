# Week 11

## Aim
Write a recursive descent parser for the grammar `S -> (L) | a` and `L -> L,S | S`.

## Files
- `program.c`

## Performing Steps
1. Read the input string.
2. Parse it using functions for `S` and `L`.
3. Accept the string only if the full input is consumed.
4. Print the error position if parsing fails.

## How To Run
```powershell
cd week-11
gcc program.c -o program
.\program.exe
```

## Sample Input
```text
a
```

## Sample Output
```text
String is successfully parsed.
```
