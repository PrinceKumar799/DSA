//write a program to convert infix to post expression
#include <stdio.h>
#include <ctype.h>
char stack[10];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int precedence(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return -1;
}

int main()
{
    char exp[10];
    char *e, x;
    printf("Enter a infix expression : ");
    scanf("%s", exp);
    printf("\n");
    e = exp;
    printf("Postfix Expression: ");
    while (*e != '\0')
    {
        if (isalnum(*e))
            printf("%c ", *e);
        else if (*e == '(')
            push(*e);
        else if (*e == ')')
        {
            while ((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while (precedence(stack[top]) >= precedence(*e))
                printf("%c ", pop());
            push(*e);
        }
        e++;
    }
    while (top != -1)
    {
        printf("%c ", pop());
    }
    printf("\n\n");
    return 0;
}
