# Week 8

## Aim
Write a small C program to implement a lexical analyzer.

## Files
- `program.c`

## Performing Steps
1. Compile `program.c`.
2. Run the executable.
3. Type or pipe a small C program as input.
4. The analyzer prints keywords, identifiers, numbers, operators, comments, and special symbols.

## How To Run
```powershell
cd week-8
gcc program.c -o program
@'
int main() {
    int a = 10;
    // sample comment
    a = a + 1;
}
'@ | .\program.exe
```

## Sample Output
```text
Keyword: int
Identifier: main
Special: (
Special: )
Special: {
Keyword: int
Identifier: a
Operator: =
Number: 10
Special: ;
Comment: // sample comment
Identifier: a
Operator: =
Identifier: a
Operator: +
Number: 1
Special: ;
Special: }
```
