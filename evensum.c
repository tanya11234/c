#include<stdio.h>
int main()
{
	int sum=0,i,n;
	printf("enter no. : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i%2==0){
	sum+=i;
	}
	}
	printf("total of odd :%d",sum);
	
	return 0;
}