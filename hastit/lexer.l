%{
#include <stdio.h>
#include "y.tab.h"
%}

alpha [a-zA-Z_]
digit [0-9]



/* uint {digit}+
int {digit}+
float ({uint}[.]){digit}*
char [a-zA-Z]
string \"[^\"]*\"
bool false|true
id {char}({char}|{digit}|[_])*
numar {int}|{float}
sir \'{char}\'|{string}|{bool} */

%option noyywrap

%%
``(.*|\n) ;



@structures {return STRUCTURI;}
@global {return GLOBAL;}
@functions {return FUNCTII;}
@main {return MAIN;}

{id} {yylval.strval = strdup(yytext); return ID;}

[ \t] ;
\n {yylineno++;}
. {return yytext[0];}