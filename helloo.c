#include<stdio.h>


void ar(int a,int b,int c){

    int total;
    total=a*b*c/100;
    printf("simple interest=%d",total);
    
}
int ar1(int a,int b,int c){
    int total;
    total=a*b*c/100;
    return total;
    
}
int main()
{
    ar(20,30,40);
    int total;
    total=ar1(50,60,70);
    printf("\n SIMPLE INTEREST: %d",total);
 
    return 0;
}

