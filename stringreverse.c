#include<stdio.h>
int main()
{
    char string[100];
    int i;
    printf("Enter the word :");
    gets(string);
    for(i=0;string[i]!='\0';i++){
    }
    for(string[i]='\0';i>=0;i--)
    { 
        printf("%c",string[i]);
    }

    return 0;
}