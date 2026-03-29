%{
#include <stdio.h>
#include <stdlib.h>
int yylex(void);
void yyerror(char *s);
%}

%token ID NUM
%left '+' '-'
%left '*' '/'

%%
E : E '+' T
  | E '-' T
  | T
  ;
T : T '*' F
  | T '/' F
  | F
  ;
F : '(' E ')'
  | ID
  | NUM
  ;
%%

int main(void) {
    printf("Enter Expression:\n");
    if (yyparse() == 0) printf("Valid Expression\n");
    return 0;
}

void yyerror(char *s) {
    printf("Invalid Expression\n");
}
