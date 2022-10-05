#include<stdio.h>
#include<string.h>
void reverse_string(char string[]);
main()
{
char string[100];
printf("Enter the string: ");
gets(string);
reverse_string(string);
printf("\nThe reversed string is :");
puts(string);
}
void reverse_string(char string[])
{
char temp;
int n = strlen(string);
int low_limit = 0;
int high_limit = n-1;
while(low_limit<high_limit)
{
temp = string[low_limit];
string[low_limit]=string[high_limit];
string[high_limit] = temp;
high_limit --;
low_limit ++;
}
}
