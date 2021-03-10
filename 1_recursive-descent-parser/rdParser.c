#include <stdio.h>

#define MAX_SIZE_OF_NUM 10

enum
{
    ERROR,
    PLUS,
    MINUS,
    STAR,
    DIVIDER,
    NUMBER,
    LPAREN,
    RPAREN,
    END
} token;

void error(int errno)
{
    printf("error!!\n");
}

char ch = ' ';
char num[MAX_SIZE_OF_NUM];

void get_token()
{
    do
    {
        ch = getchar();
        printf("!ch = %c\n", ch);
    } while (ch == ' ');

    if (ch == '+')
        token = PLUS;
    else if (ch == '-')
        token = MINUS;
    else if (ch == '*')
        token = STAR;
    else if (ch == '/')
        token = DIVIDER;
    else if (ch == '(')
        token = LPAREN;
    else if (ch == ')')
        token = RPAREN;
    else if (ch >= '0' && ch <= '9')
    {
        token = NUMBER;
    }
    else if (ch == '\n')
        token = END;
    else
        token = ERROR;
}

void expression();
void term();
void factor();

void expression()
{
    term();
    while (token == PLUS || token == MINUS)
    {
        get_token();
        term();
    }
}

void term()
{
    factor();
    while (token == STAR || token == DIVIDER)
    {
        get_token();
        factor();
    }
}

void factor()
{
    if (token == NUMBER)
        get_token();
    else if (token == LPAREN)
    {
        get_token();
        expression();
        if (token == RPAREN)
            get_token();
        else
            error(1);
    }
    else
        error(1);
}

void main()
{
    get_token();
    expression();
    if (token != END)
        error(1);
    printf("done!\n");
}