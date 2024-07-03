#include<stdio.h>
int main()
{
	int i,j,column=1;
	
	for(i=1;i<=5;i++)
		{
			for(j=1;j<=5;j++)
			{
			printf("%d  ",column);
				column++;	
			}   
		printf("  \n",j);
		}
		return 0;
}