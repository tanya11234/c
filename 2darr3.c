#include<stdio.h>
int main()
{
	int i,j,ut=0,d=0,lt=0;
	int arr[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		  printf("Enter the element of %d and %d position : ",i,j);
		  scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i<j){
				ut+=arr[i][j];
			}
			else if(i==j){
				d+=arr[i][j];
			}
			if(i>j){
				lt+=arr[i][j];
			}
	}printf("\n");
	
	}
	printf("upper half total =%d\n",ut);
		printf("diagonal total =%d\n",d);
			printf("lower half total =%d\n",lt);
return 0;
}	


