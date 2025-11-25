#include<stdio.h>
int main()
{
int a,b,sum,diff,multi;
printf("enter the two numbers: ");
scanf("%d %d",&a,&b);
sum = a+b;
diff = a-b;
multi = a*b;
printf("a+b = %d \na-b = %d \na*b = %d \n",sum,diff,multi);
}