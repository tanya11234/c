#include<stdio.h>

void reverse(int n){
int rev=0,rem;
while(n!=0){
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
}
printf("%d",rev);
}
int main(){
  int n;
  printf("Enter the value of n :");
  scanf("%d",&n);
  reverse(n);
}