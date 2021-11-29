#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
int main()
{
int choice, t, pos, count = 0;
node *newnode, *temp, *head, *nextnode;
head = 0;
while(choice){
newnode = (node*)malloc(sizeof(node));
printf("Enter the data part: ");
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
printf("enter 0 to exit and 1 for add new node: ");
        scanf("%d", &choice);
} temp = head;

/*logic for deleteing at given position*/
printf("enter the position you want to delete from list: ");
scanf("%d", &pos);

if(t){
for (int i = 1; i < pos; i++)
{
    nextnode = temp;
    temp   =  temp->next;
}
nextnode->next = temp->next;
free(temp);
}

temp = head;
/* printing the element in linkedlist */
while (temp!=0)
{
    printf("%d, ", temp->data);
    temp = temp->next;
}

return 0;
}