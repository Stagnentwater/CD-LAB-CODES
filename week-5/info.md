# Week 5

## Aim
Implement simple type checking using a small symbol table, and also include a separate symbol-table-only program for the internal questions.

## Files
- `program.c`
- `symbol_table.c`

## Performing Steps
1. Declare variables and store their types in the symbol table.
2. Check assignment types using the stored information.
3. Print whether the assignment is valid, mismatched, or undeclared.

## Separate Symbol Table Program
1. Insert a few identifiers into the symbol table.
2. Display the table.
3. Search for a present symbol and a missing symbol.

## How To Run
### Type checking
```powershell
cd week-5
gcc program.c -o program
.\program.exe
```

### Symbol table
```powershell
cd week-5
gcc symbol_table.c -o symbol_table
.\symbol_table.exe
```

## Sample Output
```text
a : type ok
b : type ok
a : type mismatch
c : not declared
```

## Symbol Table Output
```text
Symbol table:
1 a
2 sum
3 temp
sum found
x not found
```
