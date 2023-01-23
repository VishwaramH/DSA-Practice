#include <stdio.h>
#include <stdlib.h>
#define MAX 20
struct stack
{
    char st[MAX];
    int top;
} s;
void push(char item)
{
    if (s.top == MAX - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        s.top = s.top + 1;
        s.st[s.top] = item;
    }
}
void pop()
{
    if (s.top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        s.top = s.top - 1;
    }
}
int main()
{
    char inp[MAX];
    s.top = -1;
    printf("Enter string:\n");
    scanf("%s", inp);
    for (int i = 0; inp[i] != '\0'; i++)
    {
        if (inp[i] == '{' || inp[i] == '[' || inp[i] == '(')
        {
            push(inp[i]);
            continue;
        }
        else if (inp[i] == '}' || inp[i] == ']' || inp[i] == ')')
        {
            if (inp[i] == ')')
            {
                if (s.st[s.top] == '(')
                {
                    pop();
                }
                else
                {
                    printf("unbalanced\n");
                    break;
                }
            }
            if (inp[i] == ']')
            {
                if (s.st[s.top] == '[')
                {
                    pop();
                }
                else
                {
                    printf("unbalanced\n");
                    break;
                }
            }
            if (inp[i] == '}')
            {
                if (s.st[s.top] == '{')
                {
                    pop();
                }
                else
                {
                    printf("unbalanced....\n");
                    break;
                }
            }
        }
    }
    if (s.top == -1)
    {
        printf("balanced\n");
    }
    printf("\n%d", s.top);
    return 0;
}