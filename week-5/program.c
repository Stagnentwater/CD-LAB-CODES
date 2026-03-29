#include <stdio.h>
#include <string.h>

char name[][10] = {"a", "b"};
char type[] = {'i', 'f'};

char get_type(char s[]) {
    int i;
    for (i = 0; i < 2; i++) if (!strcmp(s, name[i])) return type[i];
    return 0;
}

void check(char s[], char t) {
    char x = get_type(s);
    if (!x) printf("%s : not declared\n", s);
    else if (x == t) printf("%s : type ok\n", s);
    else printf("%s : type mismatch\n", s);
}

int main(void) {
    check("a", 'i');
    check("b", 'f');
    check("a", 'f');
    check("c", 'i');
}
