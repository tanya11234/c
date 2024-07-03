#include<stdio.h>


void ar(){
    int a=5,b=10;
    int area;
    area=a*b;
    printf("%d",area);
}
int ar1(){
    int a=10;
    int b=20;
    int area;
    area=a*b;
    return area;
}
int main()
{
    ar();
    int area;
    area=ar1();
    printf("\narea of rectangle: %d",area);
    return 0;
}

