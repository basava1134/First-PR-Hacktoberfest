/*Postfix evaluation*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BLANK ' '

int stack[30];
int top = -1;

void push(int x)
{
    stack[++top] = x;                                             /*push elements into the stack*/
}

int pop()
{
    return stack[top--];                                           /*pops element from the stack*/
}

/*The driver code*/
int main(void)
{
    char e[50];
    char num[50];
    int g= 0;
    int res = 0,k=0, e1, op1, op2,temp;  
    fgets(e, sizeof(e), stdin);                                                       /*taking input*/
    int i = 0;
    while(e[i] != '\0')                                                          /*iterating each char*/                       
    {
        if(g)                                                                  /*detecting a number*/
        {
            if(e[i] == ' ' || e[i] == ',' || e[i] == '\0')           /*checks if there is any space, comma or null character*/
            {
                g= 0;
                temp = atoi(num);
                push(temp);
                k = 0;
                memset(num, 0, 5);
            }
            else
            {
                num[k] = e[i];
                k++;
            }
        }
        else if((e[i] != BLANK && e[i] != ',' && e[i] !='*' && e[i] != '/' && e[i] != '+' && e[i] && e[i] != '-')||(e[i] == '-' && e[i+1] != BLANK && e[i+1] != ',' && e[i+1] !=BLANK && e[i+1] != '/' && e[i+1] != '+'))                                             /*if beginning of a number*/
        {
                g= 1;
                k = 0;
                num[k] = e[i];
                k++;
        }
        else if(e[i] == '+' || e[i] == '-' || e[i] =='*' || e[i] == '/')                                       /*checks whether any operator is there or not*/
        {                                                                   
            op2 = pop();                                                                                             /*popping operators*/
            op1 = pop();
            if(e[i] == '+')
            {
                e1= op1+op2;
            }
            else if(e[i] == '-')
            {
                e1= op1-op2;
            }
            else if(e[i] == '*')
            {
                e1= op1*op2;
            }
            else if(e[i] == '/')
            {
                e1= op1/op2;
            }
            push(e1);                                                                                           /*push the result*/
        }
        i++;
    }
    res = pop();                                                                                  /*popping the last item*/                                                   
    printf("\n%d", res);                                                                            /*printing ans*/                                           
    return 0;
}
