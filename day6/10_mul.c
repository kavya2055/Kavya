#include<stdio.h>
void mul(int a,int b);
int main(){
    mul(10,20);
    mul(2,2);
}
void mul(int a,int b){
    printf("multiplication is : %d \n",a*b);
}
