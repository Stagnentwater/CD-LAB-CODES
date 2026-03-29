# Week 10

## Aim
Write a recursive descent parser for the grammar `S -> (L) | a`, `L -> S L'`, `L' -> , S L' | e`.

## Files
- `program.c`

## Performing Steps
1. Convert the grammar to remove left recursion.
2. Create parsing functions for `S`, `L`, and `L'`.
3. Read the input string.
4. Accept the string only if the whole input is consumed successfully.

## How To Run
```powershell
cd week-10
gcc program.c -o program
.\program.exe
```

## Sample Input
```text
((a,a),a)
```
