# Week 11

## Aim
Write a C program to calculate the FIRST function for the transformed grammar. The supplied manual repeats `Experiment 10`, so this second `Experiment 10` item is placed here as Week 11 for clean organization.

## Files
- `program.c`

## Performing Steps
1. Use the grammar after removing left recursion.
2. Build the FIRST sets in the correct order.
3. Print each set clearly.
4. In this code, `i` stands for `id` and `e` stands for epsilon.

## How To Run
```powershell
cd week-11
gcc program.c -o program
.\program.exe
```

## Sample Output
```text
FIRST(F)  = { ( i }
FIRST(T') = { * e }
FIRST(T)  = { ( i }
FIRST(E') = { + e }
FIRST(E)  = { ( i }
```
