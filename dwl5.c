#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. : ");
	scanf("%d",&n);
	int i=-n;
	do{
		printf("%d \n",i);
		i++;
		}while(i<=n);
		return 0;
}