#include<stdio.h>
int main()
{
    char string[100];
    int i;
    printf("Enter the word :");
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
    }
    printf("length of the word is %d",i);
    return 0;
}