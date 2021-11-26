#include<stdio.h>
int main()
{
struct node{
    int data;
    struct node *next;
};

struct node *head, *temp, *newnode;
newnode = (struct node*)malloc(sizeof(struct node));
printf("enter the data: ");
scanf("%d", &newnode->data);
newnode->next = 0;

if (head==0)
{
    head = temp = newnode; 
}else
{
    temp -> next = newnode;
    temp = newnode;
}
return 0;
}