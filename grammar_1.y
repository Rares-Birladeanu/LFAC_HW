%token INTEGER REAL CHARACTER STRING IDENTIFIER OPERATOR PUNCTUATION KEYWORD

%start program

%%

program : external_declaration
        | program external_declaration
        ;

external_declaration : function_definition
                     | declaration
                     ;

function_definition : type_specifier IDENTIFIER '(' parameter_list ')' compound_statement
                    ;

declaration : type_specifier init_declarator_list ';'
            ;

type_specifier : INTEGER
               | REAL
               | CHARACTER
               | STRING
               ;

init_declarator_list : init_declarator
                     | init_declarator_list ',' init_declarator
                     ;

init_declarator : IDENTIFIER
                | IDENTIFIER '=' initializer
                ;

initializer : assignment_expression
            ;

parameter_list : parameter_declaration
               | parameter_list ',' parameter_declaration
               ;

parameter_declaration : type_specifier IDENTIFIER
                      ;

compound_statement : '{' statement_list '}'
                   ;

statement_list : statement
              | statement_list statement
              ;

statement : compound_statement
          | expression_statement
          | selection_statement