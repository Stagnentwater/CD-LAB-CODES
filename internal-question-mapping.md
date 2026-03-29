# CD Lab Internal Question Mapping

This file matches the contents in the current `week-*` folders against the questions listed in `CD  LAB Internal imp questions.docx`.

## Coverage Summary

- Total internal questions: `13`
- Fully covered now: `13`
- Partial: `0`
- Missing: `0`

## Important Question Order

| Internal Question No. | Important Question | Match Status | Matching Week Content |
| --- | --- | --- | --- |
| 1 | Implementation of symbol table | Exists | [week-5/info.md](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-5/info.md) now includes a separate standalone `symbol_table.c` program. |
| 2 | Write a YACC program to implement a top-down parser for the given grammar | Exists | [week-13/info.md](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-13/info.md) now contains the YACC-based expression parser aligned to the newer reference document. |
| 3 | Develop a lexical analyzer to recognize patterns in C such as identifiers, constants, comments, and operators | Exists | [week-2/info.md](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-2/info.md) |
| 4 | Write a C program to calculate the FIRST function for the grammar `E->E+T`, `E->T`, `T->T*F`, `T->F`, `F->(E)/id` | Exists | [week-12/info.md](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-12/info.md) |
| 5 | Implementation of lexical analyzer using LEX tool | Exists | [week-3/info.md](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-3/info.md) |
| 6 | Write recursive descent parser for the grammar `S->(L)`, `S->a`, `L->L,S`, `L->S` | Exists | [week-11/info.md](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-11/info.md) |
| 7 | Generate YACC specification for syntactic categories and recognize a valid arithmetic expression using `+`, `-`, `*`, `/` | Exists | [week-3/info.md](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-3/info.md) now includes `expr.l` and `expr.y` as a validator-only program. |
| 8 | Implement type checking | Exists | [week-5/info.md](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-5/info.md) |
| 9 | Program to recognize a valid variable starting with a letter followed by letters or digits | Exists | [week-3/info.md](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-3/info.md) now includes `var.l` and `var.y`. |
| 10 | Implementation of calculator using LEX and YACC | Exists | [week-3/info.md](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-3/info.md) |
| 11 | Implement any one storage allocation strategy: heap, stack, or static | Exists | [week-6/info.md](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-6/info.md) |
| 12 | Write a LEX program to count the number of words and lines in a file or program | Exists | [week-7/info.md](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-7/info.md) |
| 13 | Write recursive descent parser for the grammar `E->E+T`, `E->T`, `T->T*F`, `T->F`, `F->(E)/id` | Exists | [week-9/info.md](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-9/info.md) |

## Week To Internal Question Match

| Week Folder | Internal Question Match | Notes |
| --- | --- | --- |
| [week-1](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-1) | No match | Placeholder only. |
| [week-2](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-2) | 3 | Main C lexical analyzer for token recognition. |
| [week-3](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-3) | 5, 7, 9, 10 | LEX analyzer, expression validator, variable validator, and calculator. |
| [week-4](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-4) | No direct internal-question match | AST / BNF-to-YACC experiment from the manual, but not listed in the internal-questions file. |
| [week-5](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-5) | 1, 8 | Separate symbol table program plus type checking. |
| [week-6](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-6) | 11 | Heap allocation strategy. |
| [week-7](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-7) | 12 | Word and line counter using LEX. |
| [week-8](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-8) | Alternate for 3 | Another lexical analyzer in C. |
| [week-9](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-9) | 13 | Filled using the Week 13 reference document's LEX/YACC expression validator because it corresponds to Internal Question 13 in this repo's numbering. |
| [week-10](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-10) | Alternate for 6 | Older recursive descent parser version for `S` / `L` grammar. |
| [week-11](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-11) | 6 | Recursive descent parser for `S -> (L) | a`. |
| [week-12](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-12) | 4 | FIRST function program aligned to the newer Week 12 document. |
| [week-13](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-13) | 2, 7 | YACC-based arithmetic-expression validity checker aligned to the newer Week 13 document. |

## Missing Or Partial Items

All previously missing or partial internal-question items are now covered by the current week folders.

## Notes

1. [week-3](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-3) contains multiple LEX/YACC items for Internal Questions 5, 7, 9, and 10.
2. In `week-3`, the generated `y.tab.c`, `y.tab.h`, and `lex.yy.c` files change depending on whether you last built `calc`, `expr`, or `var`. That is expected.
3. [week-8](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-8) is kept as an alternate lexical-analyzer-in-C folder, even though Internal Question 3 is already covered by [week-2](/c:/Users/ayn25/OneDrive/Desktop/cd%20lab/week-2).
