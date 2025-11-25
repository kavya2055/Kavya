#include<stdio.h>
int main()
{
    printf("enter number from 1 to 10 : \n");
    for(int i = 1; i<= 100; i++)
    {
        if(i%5==0){
            printf("%d ",i);
        }
    }
    return 0 ;
}