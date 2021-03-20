#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Text Colors
#define NORMAL_TEXT_COLOR "\x1b[0m"
#define ERROR_TEXT_COLOR "\x1b[31m"
// Error Codes
#define UNEXPECTED_TOKEN_ERROR 1
#define SYNTAX_ERROR 2
// Size of Stack
#define SIZE_OF_STACK 1000

#define NUMBER 256
#define PLUS 257
#define STAR 258
#define LPAREN 259
#define RPAREN 260
#define END 261
#define EXPRESSION 0
#define TERM 1
#define FACTOR 2
#define ACC 999

int action[12][6] = {
    {5, 0, 0, 4, 0, 0}, {0, 6, 0, 0, 0, ACC}, {0, -2, 7, 0, -2, -2}, {0, -4, -4, 0, -4, -4}, {5, 0, 0, 4, 0, 0}, {0, -6, -6, 0, -6, -6}, {5, 0, 0, 4, 0, 0}, {5, 0, 0, 4, 0, 0}, {0, 6, 0, 0, 11, 0}, {0, -1, 7, 0, -1, -1}, {0, -3, -3, 0, -3, -3}, {0, -5, -5, 0, -5, -5}};

int go_to[12][3] = {
    {1, 2, 3}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {8, 2, 3}, {0, 0, 0}, {0, 9, 3}, {0, 0, 10}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

int prod_left[7] = {
    0, EXPRESSION, EXPRESSION, TERM, TERM, FACTOR, FACTOR};
int prod_length[7] = {0, 3, 1, 3, 1, 3, 1};

int stack[SIZE_OF_STACK];
int top = -1;
int sym;

double yylval = 0;
double value[SIZE_OF_STACK];

void error(int err_no)
{
    if (err_no == UNEXPECTED_TOKEN_ERROR)
        printf(ERROR_TEXT_COLOR "Unexpected Token Error!\n" NORMAL_TEXT_COLOR);
    else if (err_no == SYNTAX_ERROR)
        printf(ERROR_TEXT_COLOR "Syntax Error!\n" NORMAL_TEXT_COLOR);
    exit(0);
}

int yylex()
{
    static char ch = ' ';

    while (ch == ' ' || ch == '\t')
        ch = getchar();

    int i = 0;
    if (isdigit(ch))
    {
        char yytext[32] = {};
        char *tmp;
        do
        {
            yytext[i++] = ch;
            ch = getchar();
        } while (isdigit(ch) || ch == '.');
        yylval = strtod(yytext, &tmp);
        if (strcmp(tmp, ""))
            error(UNEXPECTED_TOKEN_ERROR);
        return NUMBER;
    }
    else if (ch == '+')
    {
        ch = getchar();
        return PLUS;
    }
    else if (ch == '*')
    {
        ch = getchar();
        return STAR;
    }
    else if (ch == '(')
    {
        ch = getchar();
        return LPAREN;
    }
    else if (ch == ')')
    {
        ch = getchar();
        return RPAREN;
    }
    else if (ch == '\n')
    {
        return END;
    }
    else
        error(UNEXPECTED_TOKEN_ERROR);
}

void push(int i)
{
    stack[++top] = i;
}

void shift(int i)
{
    push(i);
    value[top] = yylval;
    sym = yylex();
}

void reduce(int i)
{
    int old_top;
    top -= prod_length[i];
    old_top = top;
    push(go_to[stack[old_top]][prod_left[i]]);

    if (i == 1)
        value[top] = value[old_top + 1] + value[old_top + 3];
    else if (i == 2)
        value[top] = value[old_top + 1];
    else if (i == 3)
        value[top] = value[old_top + 1] * value[old_top + 3];
    else if (i == 4)
        value[top] = value[old_top + 1];
    else if (i == 5)
        value[top] = value[old_top + 2];
    else if (i == 6)
        value[top] = value[old_top + 1];
    else
        error(SYNTAX_ERROR);
}

int yyparse()
{
    int i;
    stack[++top] = 0;
    sym = yylex();
    do
    {
        i = action[stack[top]][sym - 256];
        if (i == ACC)
        {
            double douVal = value[1];
            int intVal = value[1];
            if (douVal == intVal)
                printf("result : %d\n", intVal);
            else
                printf("result : %f\n", douVal);
            break;
        }
        else if (i > 0)
            shift(i);
        else if (i < 0)
            reduce(-i);
        else
            error(SYNTAX_ERROR);
    } while (i != ACC);
}

void main()
{
    yyparse();
}