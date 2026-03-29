#include <ctype.h>
#include <stdio.h>

char s[100];
int i, bad;

void E(void), T(void), F(void);

void E(void) { T(); while (s[i] == '+') i++, T(); }
void T(void) { F(); while (s[i] == '*') i++, F(); }
void F(void) {
    if (isalpha((unsigned char)s[i])) i++;
    else if (s[i] == '(') {
        i++;
        E();
        if (s[i] == ')') i++; else bad = 1;
    } else bad = 1;
}

int main(void) {
    printf("Enter expression: ");
    scanf("%99s", s);
    E();
    printf(!bad && !s[i] ? "Valid expression\n" : "Invalid expression\n");
}
