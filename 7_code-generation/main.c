#include <stdio.h>
#include <stdlib.h>
#include "type.h"

extern void initialize();
extern void yyparse();
extern void semantic_analysis(A_NODE *);
extern void code_generation(A_NODE *);
extern int syntax_err;
extern int semantic_err;
extern int line_no;
extern A_NODE *root;
extern FILE *yyin;
FILE *fout;

// print functions
extern void print_ast(A_NODE *);
extern void print_sem_ast(A_NODE *);

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
    if ((fout = fopen("a.asm", "w")) == NULL)
    {
        printf("can not open output file: a.asm\n");
        exit(1);
    }
    initialize();
    yyparse();
    if (syntax_err)
    {
        printf("\nsyntax error : %d errors\n", syntax_err);
        exit(1);
    }
    // print_ast(root);
    printf("\ncomplete syntax parse\n");
    semantic_analysis(root);
    if (semantic_err)
    {
        printf("\nsemantic error : %d errors\n", syntax_err);
        exit(1);
    }
    // print_sem_ast(root);
    printf("\ncomplete semantic analysis\n");
    code_generation(root);
    printf("\ncomplete code generation\n");
}
