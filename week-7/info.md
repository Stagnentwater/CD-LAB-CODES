# Week 7

## Aim
Write a LEX program to count the number of words and lines in a file.

## Files
- `wordline.l`

## Performing Steps
1. Write scanner rules to count words and new lines.
2. Generate C code from the LEX file.
3. Compile the generated file.
4. Pipe a small input program to the executable.

## How To Run
```powershell
cd week-7
flex wordline.l
gcc lex.yy.c -o wordline
@'
int main() {
    return 0;
}
'@ | .\wordline.exe
```

## Sample Output
```text
Lines: 3
Words: 4
```
