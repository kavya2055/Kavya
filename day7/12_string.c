#include<stdio.h>
#include<stdio.h>
int main(){
char user_input[100];
printf("enter a string: ");
fgets(user_input,100,stdin);
printf("size of array:%d\n",sizeof(user_input));
}