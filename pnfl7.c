#include<stdio.h>
int main()
{ int alphabet='A';
	for(int i=65;i<=69;i++)
	{
		for(int j=65;j<=i;j++)
		{
			printf("%c ",alphabet);
		alphabet ++;
		}
		printf("\n");
	}
	return 0;
} 