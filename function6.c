#include<stdio.h>


void ar(int a,int b){                
    
    int area;
    area=a*b;
    printf("area of rectangle of length %d and width %d is %d",a,b,area);
}
int ar1(int a,int b){
    
    int area;
    area=a*b;
    return area;
}
int main()
{
    ar(10,20);
    int area;
    area=ar1(30,40);
    printf("\narea of rectangle: %d",area);
    return 0;
}

