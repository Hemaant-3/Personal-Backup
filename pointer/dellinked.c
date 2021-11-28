#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t, choice;
 typedef struct node
    {
        int data;
        struct node *next;
            }node;

node *newnode, *head, *temp;

newnode = (node*)malloc(sizeof(node));
printf("Enter the data: ");
scanf("%d", &newnode->data);
newnode->next = 0;

if (head==0)
{
    head = temp = newnode;
} else
{
    temp = newnode->next;
    temp = newnode;
}
temp = head;

printf("list before deletion=> ");

if(temp!=0){
    printf("%d, ", temp->data);
    temp = temp->next;
}
printf("Enter 1 for delete first element from list and 0 for skip deletion: ");
scanf("%d", &t);
/* deleting at begning */


if(t){
printf("list after deletion=> ");
if(temp!=0){
    printf("%d, ", temp->data);
    temp = temp->next;
}
}
return 0;
}