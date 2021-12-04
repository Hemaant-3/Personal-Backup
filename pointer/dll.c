#include <stdio.h>
#include <stdlib.h>
/* doubly linkedlist*/
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *newnode, *head=0;

void create()
{
    struct node *temp, *next, *prev;

    int choice;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data : ");
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode; // temp++
        }
        printf("enter 0 to exit and 1 for adding new node: ");
        scanf("%d", &choice);
    }
}

void print()
{
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
}
int main()
{
create();
print();
    return 0;
}