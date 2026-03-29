%{
#include <stdio.h>
int yylex(void);
int yyerror(const char *s);
%}

%%
input : A B { puts("Valid input"); }
      | A   { puts("Valid input"); }
      ;
A     : 'a' A | 'a' ;
B     : 'b' B | 'b' ;
%%

int main(void) { return yyparse(); }
int yyerror(const char *s) { puts("Invalid input"); return 0; }
