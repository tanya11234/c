#include<stdio.h>
struct student{
    int num;
    char name[50];
    int marks[3];
};
int main()
{    
    struct student obj[3];
    int i,j,k;
    for(int i=0;i<3;i++){
        obj[i].num=i+1;
        printf("name : ");
        scanf("%s",&obj[i].name);
    
    for(int j=0;j<3;j++){
        printf("marks :");
        scanf("%d",&obj[i].marks[j]);
    }
    printf("Student : %d\n",obj[i].num);
    printf("student name :");
    puts(obj[i].name);

    for(int k=0;k<3;k++){
        printf("marks obtained :%d\n",obj[i].marks[k]);
    }
    }
    return 0;
}
