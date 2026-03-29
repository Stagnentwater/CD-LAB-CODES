# Week 5

## Aim
Implement simple type checking using a small symbol table, and also include a separate symbol-table-only program for the internal questions.

## Files
- `program.c`
- `symbol_table.c`

## Performing Steps
1. Enter variable declarations and their types.
2. Store the declarations in the symbol table.
3. Enter assignment checks one by one.
4. Print whether each assignment is valid, mismatched, or undeclared.

## Separate Symbol Table Program
1. Insert identifiers into the symbol table from user input.
2. Display the table.
3. Search for a symbol entered at runtime.

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
Input:
2
a int
b float
4
a int
b float
a float
c int

Output:
a : type ok
b : type ok
a : type mismatch
c : not declared
```

## Symbol Table Output
```text
Input:
3
a
sum
temp
sum

Output:
Symbol table:
1 a
2 sum
3 temp
Symbol found
```
