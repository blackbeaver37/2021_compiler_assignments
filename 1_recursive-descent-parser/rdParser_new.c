#include <stdio.h>
#include <stdlib.h>

// Text Colors
#define NORMAL_TEXT_COLOR "\x1b[0m"
#define ERROR_TEXT_COLOR "\x1b[31m"

// Error Codes
#define SEQUENCE_ERROR 1
#define PARENTHESES_ERROR 2
#define INVALID_END_ERROR 3

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

void expression();
void term();
void factor();

// Handling Error
void error(int errNo)
{
    if (errNo == SEQUENCE_ERROR)
    {
        printf("\b");
        printf(ERROR_TEXT_COLOR "%c\n", ch);
        printf("Wrong Token Exist\n");
    }
    else if (errNo == PARENTHESES_ERROR)
        printf(ERROR_TEXT_COLOR "Parentheses Missing\n");
    else if (errNo == INVALID_END_ERROR)
        printf(ERROR_TEXT_COLOR "Not Full Sentence\n");

    printf("Wrong Sentence!\n" NORMAL_TEXT_COLOR);
    exit(0); // Exit Program
}

// Get Token
void get_token()
{
    // Ignore Blank
    while (ch == ' ')
        ch = getchar();

    if (ch == '+')
    {
        token = PLUS;
        ch = getchar();
        printf("%c", ch);
    }
    else if (ch == '-')
    {
        token = MINUS;
        ch = getchar();
        printf("%c", ch);
    }

    else if (ch == '*')
    {
        token = STAR;
        ch = getchar();
        printf("%c", ch);
    }
    else if (ch == '/')
    {
        token = DIVIDER;
        ch = getchar();
        printf("%c", ch);
    }
    else if (ch == '(')
    {
        token = LPAREN;
        ch = getchar();
        printf("%c", ch);
    }
    else if (ch == ')')
    {
        token = RPAREN;
        ch = getchar();
        printf("%c", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        token = NUMBER;
        do
        {
            printf("%c", ch);
            ch = getchar();
        } while (ch >= '0' && ch <= '9');
    }
    else if (ch == '\n')
    {
        token = END;
        printf("%c", ch);
    }
    else
    {
        token = ERROR;
        error(SEQUENCE_ERROR);
    }
}

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
    {
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
    printf("Right Sentence!\n");
}
