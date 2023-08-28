#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
	return -1;
    else
	return stack[top--];
}

int priority(char x)
{
    if(x == '(')
	return 0;
    if(x == '+' || x == '-')
	return 1;
    if(x == '*' || x == '/')
	return 2;
    return 0;
}

void main()
{
    char exp[100];
    char  x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
	int i = 0;
    char next  = exp[i];
	i++;

    while(next != '\0')
    {
	if(isalnum(next)!=0)
	    printf("%c ", next);
	else if(next == '(')
	    push(next);
	else if(next == ')')
	{
	    while((x = pop()) != '(')
		printf("%c ", x);
	}
	else
	{
	    while(priority(stack[top]) >= priority(next))
		printf("%c ",pop());
	    push(next);
	}
	next = exp[i];
	i++;
    }

    while(top != -1)
    {
	printf("%c ",pop());
    }
    
}