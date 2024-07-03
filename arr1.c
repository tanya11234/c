#include <stdio.h>
int main()
{
	int arr1[5],arr2[6],i;
	printf("for arr1 \n");
	for(int i=0;i<=4;i++){
		printf("Enter element of possition %d : ",i);
		scanf("%d",&arr1[i]);
		
	}
	printf("for arr1 \n");
	for(int i=0;i<5;i++){
		printf("Element of possition %d is: %d\n",i,arr1[i]);
	}
	
	printf("for arr2 \n");
	for(int j=0;j<5;j++){
		printf("Enter element of possition %d : ",j);
	scanf("%d",&arr1[j]);}
	
	
	printf("for arr2 \n");
	for(int j=0;j<5;j++){
		printf("Element of possition %d is: %d\n",j,arr1[j]);
	}
return 0;
}