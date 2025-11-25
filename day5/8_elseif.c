#include<stdio.h>
int main()
{
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if(marks>=90){
        printf("gradeA");
    }else if(marks>=80){
        printf("gradeB");
    }else if(marks>=70){
        printf("gradeC");
    }else{
        printf("gradeD");
    }
}
