#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character : ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){
        printf("the given character is upper case");
    }else {
        printf("the given character is lower case"); }
}