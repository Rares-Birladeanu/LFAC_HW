%{
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include"lex.yy.c"

int yywrap();
int yylex(void);
void yyerror(char *);

typedef struct variable
{
     char name[16];
     char type[16];
     int value;
} variable;

variable vars[1000];
int noVariables = 0;

void addVariable(char *name, char *type, int value)
{
     strcpy(vars[noVariables].name, name);
     strcpy(vars[noVariables].type, type);
     vars[noVariables].value = value;
     noVariables++;
}

%}
%token NUMBER

%token INT FLOAT VOID CHAR BOOL STRING 
%token ID
%token SEMICOLON COMMA LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET
%token IF ELSE FOR WHILE RETURN
// create a token for typedef
%token TYPEDEF STRUCT CONST

%token TRUE FALSE

%token ASSIGN

%left OR AND
%left EQ NE
%left LT LE GT GE
%left PLUS MINUS
%left MULT DIV MOD

%nonassoc ELSE

%%

program   : program declaration_list
          | program statement_list
          | declaration_list
          | statement_list
     ;

declaration_list    : declaration_list declaration
                    | declaration
               ;

declaration    : type_specifier ID SEMICOLON
               | const_type_specifier ID SEMICOLON    
               | type_specifier ID LPAREN parameter_list RPAREN compound_statement
               | type_specifier ID LBRACKET NUMBER RBRACKET SEMICOLON
               | const_type_specifier ID LBRACKET NUMBER RBRACKET SEMICOLON
               ; 

user_defined_data_type   : STRUCT ID LBRACE declaration_list RBRACE
                         ;

type_specifier : INT
               | FLOAT
               | VOID
               | CHAR
               | BOOL
               | STRING
               ;

const_type_specifier : CONST type_specifier
                    ;

parameter_list : parameter_list COMMA parameter
               | parameter
               | /* empty */
               ;

parameter : type_specifier ID
          ;

compound_statement  : LBRACE statement_list RBRACE
                    | LBRACE RBRACE
                    ;

statement_list : statement_list statement
               | statement
               ;

statement : compound_statement
          | expression_statement
          | selection_statement
          | iteration_statement
          | return_statement
          ;

expression_statement : expression SEMICOLON
                    | SEMICOLON
                    ;

selection_statement : IF LPAREN expression RPAREN statement
                    | IF LPAREN expression RPAREN statement ELSE statement
                    ;

iteration_statement : WHILE LPAREN expression RPAREN statement
                    | FOR LPAREN expression_statement expression_statement RPAREN statement
                    ;

return_statement    : RETURN SEMICOLON
                    | RETURN expression SEMICOLON
                    ;

expression     : variable ASSIGN expression
               | simple_expression
               ;

variable  : type_specifier ID
          ;

simple_expression   : additive_expression
                    | additive_expression LT additive_expression
                    | additive_expression LE additive_expression
                    | additive_expression GT additive_expression
                    | additive_expression GE additive_expression
                    | additive_expression EQ additive_expression
                    | additive_expression NE additive_expression
                    ;

additive_expression : multiplicative_expression
                    | multiplicative_expression PLUS multiplicative_expression
                    | multiplicative_expression MINUS multiplicative_expression
                    ;

multiplicative_expression : primary_expression
                         | primary_expression MULT primary_expression
                         | primary_expression DIV primary_expression
                         | primary_expression MOD primary_expression
                         ;

primary_expression :  ID
                    | CONST
                    | LPAREN expression RPAREN
                    ;

%%

int main(int argc, char **argv) {
     ++argv, --argc;  /* skip over program name */
     if (argc > 0)
          yyin = fopen(argv[0], "r");
     else
          yyin = stdin;

     yyparse();

     return 0;
}
