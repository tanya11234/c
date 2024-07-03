#include<stdio.h>
int main()
{ int alphabet='A';
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%c ",alphabet);
		alphabet ++;
		}
		printf("\n");
		alphabet+32;
	}
	return 0;
} 