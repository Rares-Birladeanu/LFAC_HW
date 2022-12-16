%{
#include <stdio.h>
#include <ctype.h>

enum TokenType {
    INTEGER,
    REAL,
    CHARACTER,
    STRING,
    IDENTIFIER,
    OPERATOR,
    PUNCTUATION,
    KEYWORD,
    ERROR
};

struct Token {
    enum TokenType type;
    char* value;
};

%}

digit [0-9]
letter [a-zA-Z_]

%%

{digit}+\.{digit}* {
    // Token is a real
    yylval.type = REAL;
    sscanf(yytext, "%f", &yylval.value);
    return REAL;
}

{digit}+ {
    // Token is an integer
    yylval.type = INTEGER;
    sscanf(yytext, "%d", &yylval.value);
    return INTEGER;
}

{letter}+ {
    // Token is an identifier or keyword
    yylval.type = IDENTIFIER;
    yylval.value = yytext;
    if (strcmp(yytext, "int") == 0 ||
        strcmp(yytext, "float") == 0 ||
        strcmp(yytext, "char") == 0 ||
        strcmp(yytext, "void") == 0 ||
        strcmp(yytext, "if") == 0 ||
        strcmp(yytext, "else") == 0 ||
        strcmp(yytext, "while") == 0 ||
        strcmp(yytext, "for") == 0 ||
        strcmp(yytext, "return") == 0) {
        // Token is a keyword
        yylval.type = KEYWORD;
    }
    return IDENTIFIER;
}

'\'' . '\'' {
    // Token is a character
    yylval.type = CHARACTER;
    yylval.value = yytext[1];
    return CHARACTER;
}

'"' .* '"' {
    // Token is a string
    yylval.type = STRING;
    yylval.value = yytext;
    return STRING;
}

'+' | '-' | '*' | '/' | '%' | '<' | '>' | '!' | '=' | '&' | '|' | '^' {
    // Token is an operator
    yylval.type = OPERATOR;
    yylval.value = yytext[0];
    return OPERATOR;
}

',' | ';' | '(' | ')' | '{' | '}' | '['
