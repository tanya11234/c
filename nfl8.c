#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=65;i<=69;i++)
		{
			for(j=69;j>=65;j--)
			{
			printf("%c  ",i);
					
			}   
		printf("  \n",j);
		}
		return 0;
}