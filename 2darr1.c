#include<stdio.h>
int main()
{
	int arr1[2][2];
	int arr2[3][3];
	int i,j;
	int total=0;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				printf("Enter the element of %d and %d position : ",i,j);
				scanf("%d",&arr1[i][j]);
			}
		}
		printf("\n");
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("Enter the element of %d and %d position : ",i,j);
			scanf("%d",&arr2[i][j]);}}
			
	for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
			printf("%d ",arr1[i][j]);
			total+=arr1[i][j];
			}
	printf("\n");
	
	}
	printf("\n");
	
	
	for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
			printf("%d ",arr2[i][j]);
			total+=arr2[i][j];
			}
	printf("\n");
	
	}
	
	printf("\n%d",total);
	
	return 0;
	}
	
	