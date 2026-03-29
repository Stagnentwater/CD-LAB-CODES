# Week 2

## Aim
Develop a small lexical analyzer in C to recognize identifiers, constants, comments, and operators.

## Files
- `program.c`

## Performing Steps
1. Compile `program.c`.
2. Run the executable.
3. Type or pipe a short C snippet as input.
4. The program prints identifiers, constants, comments, and operators.

## How To Run
```powershell
cd week-2
gcc program.c -o program
@'
int total = 10;
// add one
total = total + 1;
'@ | .\program.exe
```

## Sample Output
```text
Identifier: int
Identifier: total
Operator: =
Constant: 10
Comment: // add one
Identifier: total
Operator: =
Identifier: total
Operator: +
Constant: 1
```
