# Week 3

## Aim
Implement a lexical analyzer using LEX and keep the important LEX/YACC internal questions in one place using short files.

## Files
- `lexical.l` - lexical analyzer using LEX
- `expr.l`, `expr.y` - valid arithmetic-expression recognizer
- `var.l`, `var.y` - valid variable recognizer
- `calc.l`, `calc.y` - small calculator using LEX and YACC

## Performing Steps
1. Run `flex` for the lexical analyzer.
2. For YACC-based files, run `bison -y -d` first, then `flex`.
3. Compile the generated C files.
4. Run the executable and give a short sample input.

## How To Run
### Lexical analyzer
```powershell
cd week-3
flex lexical.l
gcc lex.yy.c -o lexical
@'
int a = 10; // note
'@ | .\lexical.exe
```

### Calculator
```powershell
cd week-3
bison -y -d -o y.tab.c calc.y
flex -o lex.yy.c calc.l
gcc lex.yy.c y.tab.c -o calc
'5+3*2' | .\calc.exe
```

### Expression validator
```powershell
cd week-3
bison -y -d -o y.tab.c expr.y
flex -o lex.yy.c expr.l
gcc lex.yy.c y.tab.c -o expr
'2+3*4' | .\expr.exe
```

### Variable validator
```powershell
cd week-3
bison -y -d -o y.tab.c var.y
flex -o lex.yy.c var.l
gcc lex.yy.c y.tab.c -o var
'total1' | .\var.exe
```

## Sample Inputs
```text
lexical.l : int a = 10; // note
expr      : 2+3*4
var       : total1
calc      : 5+3*2
```
