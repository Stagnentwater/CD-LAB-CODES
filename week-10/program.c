#include <stdio.h>

char s[100];
int i, bad;

void S(void), L(void);

void S(void) {
    if (s[i] == 'a') i++;
    else if (s[i] == '(') {
        i++;
        L();
        if (s[i] == ')') i++; else bad = 1;
    } else bad = 1;
}

void L(void) {
    S();
    while (s[i] == ',') i++, S();
}

int main(void) {
    printf("Enter string: ");
    scanf("%99s", s);
    S();
    printf(!bad && !s[i] ? "Valid string\n" : "Invalid string\n");
}
