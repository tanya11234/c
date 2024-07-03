#include<stdio.h>
int main(){

	int i,n,odd=0,even=0;
	printf("enter number :");
	scanf(%d",&n);
	int arr[n];
	for(int i=0;i<=n;i++){
		print("Enter element of array of position %d,i);
		scanf("%d",&arr[i]);}
		for(i=0;i<=n;i++){
		if(i%2==0){
		even+=arr[i];
		printf("even sum =%d",even);
		}
		else{
		odd+=arr[i];
		printf("odd sum =%d",odd);
		}
	}
	
	return 0;
}