#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAXP 20
#define MAXS 20

typedef struct { char x[MAXS]; int n; } Set;

char prod[MAXP][30];
int nprod;

int has(Set *s, char c) {
    int i;
    for (i = 0; i < s->n; i++) if (s->x[i] == c) return 1;
    return 0;
}

void add(Set *s, char c) {
    if (!has(s, c)) s->x[s->n++] = c;
}

int exists(char c) {
    int i;
    for (i = 0; i < nprod; i++) if (prod[i][0] == c) return 1;
    return 0;
}

void FIRST(char c, Set *out, int vis[]);

void FIRST_STR(char s[], Set *out, int vis[]) {
    int i, eps = 1;
    for (i = 0; s[i]; i++) {
        Set t = {"", 0};
        if (s[i] == '$') {
            add(out, '$');
            return;
        }
        if (s[i] == '|') return;
        FIRST(s[i], &t, vis);
        {
            int j;
            for (j = 0; j < t.n; j++) if (t.x[j] != '$') add(out, t.x[j]);
        }
        if (!has(&t, '$')) {
            eps = 0;
            break;
        }
    }
    if (eps) add(out, '$');
}

void FIRST(char c, Set *out, int vis[]) {
    int i, id = c - 'A';
    if (!isupper((unsigned char)c)) {
        add(out, c);
        return;
    }
    if (id < 0 || id >= 26 || vis[id]) return;
    vis[id] = 1;

    for (i = 0; i < nprod; i++) {
        int j = 2, k = 0;
        char alt[30];
        if (prod[i][0] != c) continue;
        while (1) {
            if (prod[i][j] == '|' || prod[i][j] == '\0') {
                alt[k] = '\0';
                FIRST_STR(alt, out, vis);
                if (prod[i][j] == '\0') break;
                k = 0;
                j++;
                continue;
            }
            alt[k++] = prod[i][j++];
        }
    }
    vis[id] = 0;
}

int main(void) {
    int i, ch = 1, vis[26];
    char c;
    Set ans;

    printf("How many productions? : ");
    scanf("%d", &nprod);
    printf("Enter %d productions (epsilon = $):\n", nprod);
    for (i = 0; i < nprod; i++) scanf("%s", prod[i]);

    while (ch == 1) {
        memset(vis, 0, sizeof(vis));
        ans.n = 0;
        printf("\nEnter non-terminal to find FIRST: ");
        scanf(" %c", &c);
        if (!exists(c)) puts("Non-terminal not found");
        else {
            FIRST(c, &ans, vis);
            printf("FIRST(%c) = { ", c);
            for (i = 0; i < ans.n; i++) printf("%c ", ans.x[i]);
            printf("}\n");
        }
        printf("Press 1 to continue, any other number to exit: ");
        scanf("%d", &ch);
    }
}
