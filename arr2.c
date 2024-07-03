#include<stdio.h>
int main()
{
	int i,j,student[2],sub[4],tmark=0,per;
	for(int i=0;i<=2;i++)
	{
		printf("student: ");
		scanf("%d",&student[i]);
		
		for(int j=0;j<=4;j++)
		{
		printf("marks obtained in sub %d:",j);
		scanf("%d",&sub[j]);
		tmark+=sub[j];
		}
		
	printf("Total marks = %d\n",tmark);
	
	per=tmark/5;
	printf("percentage = %d\n",per);
	
	if(per>90){
		printf("grade A");
	}
	else if(91<per<70){
		printf("grade B");
	}
	else if(71<per<50)
	{
		printf("grade C");
	}else if(51>per){
		printf("grade D");
	}
	printf("\n");
	}
	
	return 0;
}