#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *prev,*next;
}nod;
nod *head=0,*tail;
void create(){
    nod* newnode;
    
    int choice =1;
    while (choice)
    {
        newnode = (nod*)malloc(sizeof(nod));
        printf("enter the data to store: ");
        scanf("%d",&newnode->data); 
        if (head==0)
        {
            tail = head = newnode;
            head->prev = newnode;
            head->next = newnode;
        }else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head;
            tail->prev=newnode;
            tail = newnode;
        }
        printf("enter 0 to skip and 1 for add newnode: ");
        scanf("%d",&choice);
        
    }
    
}
void display_list(){
    nod *pnode = head;
    while (pnode!=tail)
    {
        printf("%d, ",pnode->data);
        pnode = pnode->next;
    }
    printf("%d, ",pnode->data);
}
