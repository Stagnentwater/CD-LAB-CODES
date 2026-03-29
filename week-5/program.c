#include <stdio.h>
#include <string.h>

#define MAX 20

char name[MAX][20], type[MAX];
int n;

char get_type(char s[]) {
    int i;
    for (i = 0; i < n; i++) if (!strcmp(s, name[i])) return type[i];
    return 0;
}

void check(char s[], char t) {
    char x = get_type(s);
    if (!x) printf("%s : not declared\n", s);
    else if (x == t) printf("%s : type ok\n", s);
    else printf("%s : type mismatch\n", s);
}

int main(void) {
    int i, m;
    char s[20], t[20];

    printf("Enter number of declarations: ");
    scanf("%d", &n);
    printf("Enter name and type (int/float)\n");
    for (i = 0; i < n; i++) {
        scanf("%s%s", name[i], t);
        type[i] = t[0] == 'i' ? 'i' : 'f';
    }

    printf("Enter number of assignments: ");
    scanf("%d", &m);
    printf("Enter variable and value type (int/float)\n");
    for (i = 0; i < m; i++) {
        scanf("%s%s", s, t);
        check(s, t[0] == 'i' ? 'i' : 'f');
    }
}
