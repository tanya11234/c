#include<stdio.h>
int main()
{
    char string1[100];
    char string2[100];
    char string3[200];

    printf("enter word 1 : ");
    gets(string1);
    printf("enter word 2 : ");
    gets(string2);
int k=0;
    for(int i=0;string1[i]!='\0';i++,k++){
       string3[k]=string1[i];
    }
    for(int j=0;string2[j]!='\0';j++,k++){
        string3[k]=string2[j];
    }
string3[k]='\0';
printf("%s",string3);
}