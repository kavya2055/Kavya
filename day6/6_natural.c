#include<stdio.h>
int main(){
    int n,sum = 0;
    printf("enter the number:");
    scanf("%d",&n);
    // inti = 1;
    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }
    sum = (n*(n+1))/2;
    printf("sum is : %d",sum);
}