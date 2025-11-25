#include<stdio.h>
int main(){
    int min=0, arr[5];
    for(int i=0;i<=5-1;i++){
        printf("enter a numbers : ");
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int i = 0;i<=5-1;i++){
        if(arr[i]<min) {
            min = arr[i];
        }
    }
    printf("min :%d",min);
    return 0;
}