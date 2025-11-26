#include<stdio.h>
int main(){
    int a = 20;
    int *ptr = &a;
    printf("before changing value of a: %d \n",a);
    *ptr=80;
    printf("after changing values of a : %d \n",a);
    (*ptr)++;
    printf("after changing values of a : %d \n",a);
}