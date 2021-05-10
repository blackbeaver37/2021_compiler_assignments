#include <stdio.h>
#include <stdlib.h>
#include "type.h"

#define NORMAL_TEXT_COLOR "\x1b[0m"
#define ERROR_TEXT_COLOR "\x1b[31m"

extern void intitialize();
extern void yyparse();
extern int syntax_err;
extern int line_no;
extern A_NODE *root;
extern FILE *yyin;

void yyerror(char *s)
{
    printf(ERROR_TEXT_COLOR "%s on line: %d\n" NORMAL_TEXT_COLOR, s, line_no);
    exit(1);
}

void main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("source file not given\n");
        exit(1);
    }
    if ((yyin = fopen(argv[argc - 1], "r")) == NULL)
    {
        printf("can not open input file: %s\n", argv[argc - 1]);
        exit(1);
    }
    initialize();
    yyparse();
    if (syntax_err == 0)
        print_ast(root);
}
