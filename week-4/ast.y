%{
#include <stdio.h>
#include <stdlib.h>

typedef struct n { char op; int val; struct n *l, *r; } N;
N *root;

N *node(char op, int val, N *l, N *r) {
    N *p = malloc(sizeof(N));
    p->op = op;
    p->val = val;
    p->l = l;
    p->r = r;
    return p;
}

void show(N *p, int d) {
    int i;
    if (!p) return;
    show(p->r, d + 1);
    for (i = 0; i < d; i++) printf("  ");
    if (p->op) printf("%c\n", p->op); else printf("%d\n", p->val);
    show(p->l, d + 1);
}

int yylex(void);
int yyerror(const char *s);
%}

%union {
    int num;
    N *node;
}

%token <num> NUM
%type <node> expr term factor

%%
input : expr { root = $1; }
      ;
expr  : expr '+' term { $$ = node('+', 0, $1, $3); }
      | expr '-' term { $$ = node('-', 0, $1, $3); }
      | term          { $$ = $1; }
      ;
term  : term '*' factor { $$ = node('*', 0, $1, $3); }
      | term '/' factor { $$ = node('/', 0, $1, $3); }
      | factor          { $$ = $1; }
      ;
factor: '(' expr ')' { $$ = $2; }
      | NUM          { $$ = node(0, $1, 0, 0); }
      ;
%%

int main(void) {
    if (yyparse() == 0) {
        printf("AST:\n");
        show(root, 0);
    }
    return 0;
}

int yyerror(const char *s) { puts("Invalid expression"); return 0; }
