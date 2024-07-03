#include<stdio.h>
int main()
{	
	int square,n,i;
	printf("Enter the number  : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
	if(i%2==0){
	square=i*i;}
	printf("the series : %d\n%d\n ",square,i);
	}
	return 0;
}