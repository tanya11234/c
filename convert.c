#include<stdio.h>
int main()
{
	char alphabet;
	
	printf("enter alphabet : ");
	scanf("%c",&alphabet);
	
	if(alphabet>=97&&alphabet<=122)
	{
		printf("%c",alphabet-32);
	}
		else
		{
		printf("%c",alphabet+32);
		}
	return 0;
}	