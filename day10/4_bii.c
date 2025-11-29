#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node*head;
struct Node*newnode;
struct Node*tail;
int main(){
    head=NULL;
    int ch = 1;

    while(ch){
        newnode= (struct Node*)malloc(sizeof(struct Node));
        printf("enter a number: ");
        scanf("%d",&newnode->data);

        newnode->next=NULL;

        if(head ==NULL){
            head = newnode;
            tail=newnode;
        }else{
            tail->next = newnode;
            newnode->prev = tail;
            tail=newnode;
        }
        newnode->next=head;
        head->prev=tail;
        printf("do you need to continue or not(0/1):\n");
        scanf("%d",&ch);    
    }
    printf("elements:\n");
    tail = head;

    while(tail->next!=head){
        printf("%d ",tail->data);
        tail=tail->next;
    }
    printf("%d",tail->data);
    printf("\n");
    return 0;
}




