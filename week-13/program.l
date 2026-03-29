%option noyywrap

%{
#include "y.tab.h"
%}

%%
[0-9]+                { return NUM; }
[a-zA-Z][a-zA-Z0-9]*  { return ID; }
[ \t\r\n]+            ;
.                     { return yytext[0]; }
%%
