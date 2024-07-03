#include<stdio.h>
int main()
{	
	int i;
	for(i=65;i<=90;i++){
	if(i%2!=0)
	{
			printf("%c\n",i);
	
	} else if(i%3!=0){
		printf("%c\n",i+32); }
	
	
	}
	return 0;
}