%{
#include "y.tab.h"
%}

%%
[ab]        { return yytext[0]; }
[ \t\n]     ;
.           { return yytext[0]; }
%%

int yywrap(void) { return 1; }
