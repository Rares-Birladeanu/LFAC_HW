%{
    #include "y.tab.h"
    int countn = 0;
%}

alpha [a-zA-Z_]
digit [0-9]

%option noyywrap

%%

{alpha}({alpha}|{digit})*   { return ID; }

[-]?{digit}+                { return NUMBER; }
[-]?{digit}+\.{digit}{1,6}  { return FLOAT_NUM; }

"true"                      { return TRUE; }
"false"                     { return FALSE; }
["].*["]                    { return STR; }
['].[']                     { return CHARACTER; }

"int"                       { return INT; }
"char"                      { return CHAR; }
"float"                     { return FLOAT; }
"string"                    { return STRING; }
"bool"                      { return BOOL; }
"void"                      { return VOID; }
"const"                     { return CONST; }

"function"                  { return FUNCTION; }

"struct"                    { return STRUCT; }

"->"                        { return SELECTOR; }

"if"                        { return IF; }
"else"                      { return ELSE; }

"while"                     { return WHILE; }
"for"                       { return FOR; }

"printf"                    { return PRINTF; }
"scanf"                     { return SCANF; }

"return"                    { return RETURN; }

"<="                        { return LE; }
">="                        { return GE; }
"=="                        { return EQ; }
"!="                        { return NE; }
">"	                        { return GT; }
"<"	                        { return LT; }
"&&"	                    { return AND; }
"||"	                    { return OR; }
"+"                         { return PLUS; }
"-"                         { return MINUS; }
"/"                         { return DIV; }
"*"                         { return MULT; }
"%"                         { return MOD; }
"="                         { return ASSIGN; }
"!"                         { return NOT; }
";"                         { return SEMICOLON; }
","                         { return COMMA; }
"("                         { return LPAREN; }
")"                         { return RPAREN; }
"["                         { return LBRACKET; }
"]"                         { return RBRACKET; }
"{"                         { return LBRACE; }
"}"                         { return RBRACE; }

"#EVALUATE"                { return EVALUATE; }
"#TYPEOF"                  { return TYPEOF; }

\/\/.*                      { ; }
\/\*(.*\n)*.*\*\/           { ; } 
[ \t]*                      { ; }
[\n]                        { countn++; }
.	                        { return *yytext; }

%%

int yywrap() {
    return 1;
}