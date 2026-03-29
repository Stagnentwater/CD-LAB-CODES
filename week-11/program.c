#include <stdio.h>
#include <stdlib.h>

char s[100];
int pos;

char look(void) { return s[pos]; }
void error(void) { printf("Error at position %d\n", pos); exit(1); }

int S(void);

int L(void) {
    if (!S()) return 0;
    while (look() == ',') {
        pos++;
        if (!S()) error();
    }
    return 1;
}

int S(void) {
    if (look() == 'a') {
        pos++;
        return 1;
    }
    if (look() == '(') {
        pos++;
        if (!L()) error();
        if (look() == ')') {
            pos++;
            return 1;
        }
        error();
    }
    return 0;
}

int main(void) {
    printf("Enter the input string: ");
    scanf("%99s", s);
    if (S() && s[pos] == '\0') puts("String is successfully parsed.");
    else error();
}
