%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}

%nonassoc IFX
%nonassoc ELSE

%token VARIABLE VARIABLE TIP BGIN END ASSIGN NR PLUS MINUS MUL DIV NOT GRTHAN LESSTHAN GREQ LESSEQ
%token ARRAY IS_EQUAL IF ELSE WHILE
%token PRINT
%start progr

%%
progr : declaratii bloc {printf("program corect!\n");}
     ;

declaratii :  declaratie ';'
	   | declaratii declaratie ';'
	   ;
declaratie : TIP VARIABLE
           | TIP VARIABLE '(' lista_param ')'
           | TIP VARIABLE '(' ')'
           ;
lista_param : param
            | lista_param ','  param 
            ;
            
param : TIP VARIABLE
      ; 
      
bloc : BGIN list END  
     ;

list :  statement ';'
     | list statement ';'
     ;

statement:
 	  ';' |	IF expr statement %prec IFX
              | IF expr statement ELSE statement
	      | WHILE expr statement

		  | VARIABLE ASSIGN VARIABLE
		  | VARIABLE PLUS VARIABLE
		  | VARIABLE PLUS NR
		  | NR PLUS NR
		  | VARIABLE MINUS VARIABLE
		  | VARIABLE MINUS NR
		  | NR MINUS NR
		  | VARIABLE MUL VARIABLE
		  | VARIABLE MUL NR
		  | NR MUL NR
		  | VARIABLE DIV VARIABLE
		  | VARIABLE DIV NR
		  | NR DIV NR
		  | NOT VARIABLE
		  | NOT NR
		  | VARIABLE GRTHAN VARIABLE
		  | VARIABLE GRTHAN NR
		  | NR GRTHAN NR

		  | VARIABLE LESSTHAN VARIABLE
		  | VARIABLE LESSTHAN NR
		  | NR LESSTHAN NR

		  | VARIABLE GREQ VARIABLE
		  | VARIABLE GREQ NR
		  | NR GREQ NR

		  | VARIABLE LESSEQ VARIABLE
		  | VARIABLE LESSEQ NR
		  | NR LESSEQ NR

 		  | VARIABLE IS_EQUAL VARIABLE
		  | VARIABLE IS_EQUAL NR
		  | NR IS_EQUAL NR

		 | VARIABLE ASSIGN NR
		 | VARIABLE '(' lista_apel ')'
		 | TIP VARIABLE ARRAY


expr : '(' statement ')'
     ;

lista_apel : NR
           | lista_apel ',' NR
           ;

array   : array
	| list array
	;
%%
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 
