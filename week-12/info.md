# Week 12

## Aim
Write a C program to calculate the FIRST function for a grammar.

## Files
- `program.c`

## Performing Steps
1. Enter productions in the format `A=alpha`.
2. Use `$` for epsilon.
3. Enter one non-terminal at a time to find its FIRST set.
4. Repeat for other non-terminals if required.

## How To Run
```powershell
cd week-12
gcc program.c -o program
.\program.exe
```

## Sample Input
```text
5
E=TR
R=+TR|$
T=FY
Y=*FY|$
F=(E)|i
E
1
R
0
```

## Sample Output
```text
FIRST(E) = { ( i }
FIRST(R) = { + $ }
```
