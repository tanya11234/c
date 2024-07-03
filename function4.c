#include<stdio.h>


void ar(){
    int a=70,b=80,c=90;
    int total;
    total=a+b+c;
    printf("total=%d",total);
    float pr=total/3;
    printf("\npercentage=%f",pr);
}
int ar1(){
    int a=10;
    int b=20,c=30;
    int total;
    total=a+b+c;
    return total;
    
}
int main()
{
    ar();
    int total;
    total=ar1();
    printf("\n TOTAL: %d",total);
    float pr;
    pr=total/3;
    printf("\n PERCENTAGE : %f",pr);
    return 0;
}

