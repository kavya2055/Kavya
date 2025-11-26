#include<stdio.h>
int main(){
    int num = 100;
    int *ptr = &num;
    printf("value of num :%d\n",num);
    printf("value of num using ptr : %d\n",*ptr);
    printf("address of num : %d\n",&num);
    printf("value of ptr using num:%p\n",num);
    printf("address of ptr :%p\n",&ptr);
    printf("value of ptr using num:%p\n",&num);
    printf("value of ptr using ptr and num:%p\n",ptr,num);
}