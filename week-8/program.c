#include <ctype.h>
#include <stdio.h>
#include <string.h>

char *kw[] = {"int", "float", "char", "if", "else", "return"};

int is_kw(char s[]) {
    int i;
    for (i = 0; i < 6; i++) if (!strcmp(s, kw[i])) return 1;
    return 0;
}

int main(void) {
    int c, d, i;
    char s[32];

    while ((c = getchar()) != EOF) {
        if (isalpha(c) || c == '_') {
            for (i = 0; isalnum(c) || c == '_'; c = getchar()) s[i++] = c;
            s[i] = 0;
            printf("%s: %s\n", is_kw(s) ? "Keyword" : "Identifier", s);
            if (c != EOF) ungetc(c, stdin);
        } else if (isdigit(c)) {
            for (i = 0; isdigit(c); c = getchar()) s[i++] = c;
            s[i] = 0;
            printf("Number: %s\n", s);
            if (c != EOF) ungetc(c, stdin);
        } else if (c == '/') {
            d = getchar();
            if (d == '/') {
                printf("Comment: //");
                while ((c = getchar()) != EOF && c != '\n') putchar(c);
                printf("\n");
            } else {
                printf("Operator: /\n");
                if (d != EOF) ungetc(d, stdin);
            }
        } else if (c == '+' || c == '-' || c == '*' || c == '=') {
            printf("Operator: %c\n", c);
        } else if (c == ';' || c == '(' || c == ')' || c == '{' || c == '}') {
            printf("Special: %c\n", c);
        }
    }
}
