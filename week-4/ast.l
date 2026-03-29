%{
typedef struct n N;
#include "y.tab.h"
#include <stdlib.h>
%}

%%
[0-9]+      { yylval.num = atoi(yytext); return NUM; }
[+\-*/()]   { return yytext[0]; }
[ \t\n]     ;
.           ;
%%

int yywrap(void) { return 1; }
