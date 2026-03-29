#include <stdio.h>
#include <string.h>

char sym[5][10];
int n;

void add(char s[]) { strcpy(sym[n++], s); }
int find(char s[]) {
    int i;
    for (i = 0; i < n; i++) if (!strcmp(sym[i], s)) return i;
    return -1;
}

int main(void) {
    int i;
    add("a");
    add("sum");
    add("temp");

    puts("Symbol table:");
    for (i = 0; i < n; i++) printf("%d %s\n", i + 1, sym[i]);

    printf(find("sum") >= 0 ? "sum found\n" : "sum not found\n");
    printf(find("x") >= 0 ? "x found\n" : "x not found\n");
}
