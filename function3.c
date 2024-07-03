#include<stdio.h>


void ar(){
    int a=100;
    int ruppees;
    ruppees=a*80;
    printf("dollars to ruppees:%d",ruppees);
}
int ar1(){
    int a=10;
    int ruppees;
    ruppees=a*80;
    return ruppees;
}
int main()
{
    ar();
    int ruppees;
    ruppees=ar1();
    printf("\n DOLLARS TO RUPPEES: %d",ruppees);
    return 0;
}

