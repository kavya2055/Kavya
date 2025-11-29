#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head,*newnode,*curr;
int main(){
    head = NULL;
    int ch = 1;
    while(ch){
        newnode= (struct Node*)malloc(sizeof(struct Node));
        printf("enter a number: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head ==NULL){
            head = newnode;
            curr=newnode;
        }else{
            curr->next = newnode;
            curr=newnode;
        }
        printf("do you need to continue or not(0/1):\n");
        scanf("%d",&ch);    
    }
    printf("elements:\n");
    curr = head;
    while(curr!=NULL){
        printf("%d ",curr->data);
        curr=curr->next;
    }
    printf("\n");
    return 0;
}

