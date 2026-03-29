#include <stdio.h>
#include <string.h>

int main(void) {
    char f[] = "( i", tp[] = "* e", ep[] = "+ e", t[10], e[10];
    strcpy(t, f);
    strcpy(e, t);
    printf("FIRST(F)  = { %s }\n", f);
    printf("FIRST(T') = { %s }\n", tp);
    printf("FIRST(T)  = { %s }\n", t);
    printf("FIRST(E') = { %s }\n", ep);
    printf("FIRST(E)  = { %s }\n", e);
}
