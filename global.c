#include<stdio.h>
int p=90,c=80,m=70;

int total;
   float per;
 int main(){
    printf("marks of physics is %d",p);
    printf("\nmarks of chem is %d",c);
    printf("\nmarks of maths is %d",m);
   total=p+c+m;
   per=total/3;
    
    printf("\ntotal marks = %d",total);
    printf("\npercentage = %f",per);
 }