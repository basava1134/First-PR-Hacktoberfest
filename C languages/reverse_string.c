#include<stdio.h>
#include<ctype.h>
#include<string.h>
char stack[100];
int top = -1;
/* Pushing the stack*/
void push(char x)
{
    stack[++top] = x;
}
/* Poping from the stack*/
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
int main()
{
    char str[100];
    /*Taking the string as input*/
    gets(str);
    /*finding the length of the string*/
    int l=strlen(str),i;
    /*Pushing from the stack*/
    for(i=0;i<l;i++)
    {
        push(str[i]);
    }
    /*Printing the array in reverse order*/
    for(i=0;i<l;i++)
    {
        printf("%c", pop());
    }
    
}
