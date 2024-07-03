#include<stdio.h>


void ar(){
    int a=5;
    int area;
    area=a*a;
    printf("%d",area);
}
int ar1(){
    int a=10;

    int area;
    area=a*a;
    return area;
}
int main()
{
    ar();
    int area;
    area=ar1();
    printf("\narea of square : %d",area);
    return 0;
}

