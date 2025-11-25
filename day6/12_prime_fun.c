#include<stdio.h>
void fact(int num);
int main(){
    int num;
    printf ("enter a number : ");
    scanf("%d",&num);
    fact(num);
    fact(num);
    fact(num);
    int isPrime = 1;
    if(num<=1){
        isPrime=0;
}
void fact(int num){
int isPrime = 1;
 if(num<=1){
        isPrime=0;
    }
for(int i=2;i<=num/2;i++){
    if(num%i==0){
        isPrime=0;
        break;
    }

}
if(isPrime==1){
        printf("It is a Prime Number ");
    }else{
        printf("Not a Prime Number ");
    }
}
}