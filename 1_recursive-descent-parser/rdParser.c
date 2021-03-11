#include <stdio.h>
#include <stdlib.h>

#define NORMAL_TEXT_COLOR "\x1b[0m"
#define ERROR_TEXT_COLOR "\x1b[31m"

#define SEQUENCE_ERROR 1
#define PARENTHESES_ERROR 2
#define DIVIDE_BY_ZERO_ERROR 3
#define INVALID_END_ERROR 4

char ch = ' ';

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

void error(int errNo)
{
    if (errNo == SEQUENCE_ERROR)
    {
        printf("\b");
        printf(ERROR_TEXT_COLOR "%c\n", ch);
        printf("�߸��� ��ġ�� ��ū�� �����մϴ�.\n");
    }
    else if (errNo == PARENTHESES_ERROR)
        printf(ERROR_TEXT_COLOR "��ȣ�� ��Ȯ�� ������ �ʾҽ��ϴ�.\n");
    else if (errNo == DIVIDE_BY_ZERO_ERROR)
    {
        printf("\b");
        printf(ERROR_TEXT_COLOR "%c\n", ch);
        printf("0���δ� ���� �� �����ϴ�.\n");
    }
    else if (errNo == INVALID_END_ERROR)
        printf(ERROR_TEXT_COLOR "������ ��Ȯ�� ������ �ʾҽ��ϴ�.\n");

    printf("�Ϻ����� ���� �����Դϴ�.\n" NORMAL_TEXT_COLOR);
    exit(0);
}

void get_token()
{
    do
    {
        ch = getchar();
        printf("%c", ch);
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
        token = NUMBER;
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
        if (token == DIVIDER)
        {
            get_token();
            if (ch == '0')
                error(DIVIDE_BY_ZERO_ERROR);
        }
        else
            get_token();
        factor();
    }
}

void factor()
{
    if (token == NUMBER)
    {
        get_token();
        while (token == NUMBER)
            get_token();
    }
    else if (token == LPAREN)
    {
        get_token();
        expression();
        if (token == RPAREN)
            get_token();
        else
            error(PARENTHESES_ERROR);
    }
    else if (token == END)
        error(INVALID_END_ERROR);
    else
        error(SEQUENCE_ERROR);
}

void main()
{
    get_token();
    expression();
    if (token != END)
        error(INVALID_END_ERROR);
    printf("�Ϻ��� �����Դϴ�.\n");
}