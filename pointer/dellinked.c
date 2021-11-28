#include<stdio.h>
#include<stdlib.h>
 typedef struct node
    {
        int data;
        struct node *next;
            }node;
int main()
{
    int t, choice;
node *newnode, *head, *temp;
head = 0;

while(choice){
newnode = (node*)malloc(sizeof(node));
printf("Enter the data: ");
scanf("%d", &newnode->data);
newnode->next = 0;

if (head==0)
{
    head = temp = newnode;
} else
{
    temp->next = newnode;
 
    temp = newnode;
}
printf("enter 0 for exit and 1 enter a newnode: ");
scanf("%d", &choice);
}

temp = head;

printf(" list before deletion\n=> ");

while(temp!=0){
    printf("%d, ", temp->data);
    temp = temp->next;
}
printf("\nEnter 1 for delete first element from list and 0 for skip deletion: ");
scanf("%d", &t);
/* deleting at begning */

if(t){
temp = head;
head = head->next; //head++;
free(temp);
}

printf("list after deletion\n=> ");
temp = head;
while(temp!=0){
    printf("%d, ", temp->data);
    temp = temp->next;
}

return 0;
}