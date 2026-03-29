# Week 6

## Aim
Implement one storage allocation strategy. This folder uses heap allocation because it is the smallest to remember.

## Files
- `program.c`

## Performing Steps
1. Enter how many elements to store.
2. Allocate memory at runtime using `malloc`.
3. Enter the values and store them in heap memory.
4. Print the values and release the memory using `free`.

## How To Run
```powershell
cd week-6
gcc program.c -o program
.\program.exe
```

## Sample Output
```text
Input:
5
10 20 30 40 50

Output:
Heap values: 10 20 30 40 50
Memory freed
```
