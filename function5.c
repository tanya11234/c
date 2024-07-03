#include<stdio.h>


void ar(){
    int a=70,b=80,c=90;
    int total;
    total=a*b*c/100;
    printf("simple interest=%d",total);
    
}
int ar1(){
    int a=10;
    int b=20,c=30;
    int total;
    total=a*b*c/100;
    return total;
    
}
int main()
{
    ar();
    int total;
    total=ar1();
    printf("\n SIMPLE INTEREST: %d",total);
 
    return 0;
}

