%{
#include <stdio.h>
#include "language.tab.h"
%}

%option noyywrap

%%
"int"|"float"|"char"|"string"|"bool" {return TIP;}
"begin_progr" {return BGIN;}
"==" {return IS_EQUAL;}
">" {return GRTHAN;}
"<" {return LESSTHAN;}
"<=" {return LESSEQ;}
">=" {return GREQ;}
"end_progr" {return END;}
[_a-zA-Z][_a-zA-Z0-9]* {return VARIABLE;}

":=" {return ASSIGN;}
":+" {return PLUS;}
":-" {return MINUS;}
":*" {return MINUS;}
":/" {return MINUS;}
"!"  {return NOT;}

"array" {return ARRAY;}
"if" {return IF;}
"else" {return ELSE;}
"while" {return WHILE;}
"print" {return PRINT;}
[0-9]+ {return NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}