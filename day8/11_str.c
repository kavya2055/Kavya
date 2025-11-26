#include<stdio.h>
struct student{
    char name[30];
    int roll_num;
};
int main(){
    struct student st1;
    printf("enter a name: \n");
    scanf("%s\n",st1.name);
    printf("roll no:%d\n",st1.roll_num);
    printf("%d\n",st1.marks);

    strcpy(st2.name,"meena");
    st2.marks=14;
    st2.roll_num=102;
    printf("student details :\n");
    printf("name:%s\n",st2.name);
    printf("roll no:%d\n",st2.roll_num);
    printf("marks:%d\n",st2.marks);
}
