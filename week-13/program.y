%{
#include <stdio.h>
int yylex(void);
int yyerror(const char *s);
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
    if (yyparse() == 0) puts("Valid Expression");
    return 0;
}

int yyerror(const char *s) {
    puts("Invalid Expression");
    return 0;
}
