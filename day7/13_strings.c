#include<stdio.h>
#include<string.h>
int main(){
    char first_name[]="pavan";
    char last_name[]="gowda";
    char another_name[]="pavan";

    printf("length of first_name : %s\n",strlen(first_name));
    printf("full name: %s\n",strcat(first_name,last_name));
    printf("%s\n",strcmp(first_name,another_name));
    if(strcmp(first_name,last_name)==0){
        printf("Both strings are equal\n");
    }
    else{
        printf("Both strings are not equal\n");
    }
}