#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
    int num, choice, t;

    node *newnode, *head, *temp, *add;
    head = 0;
    while (t)
    {
        newnode = (node *)malloc(sizeof(node));
        printf("enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0)
        {
            head = temp =  newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode; //temp++
        }
        printf("do you want to contionue, or enter new node: \n (0,1): ");
        scanf("%d", &t);
    }

    temp = head;

    printf("do you want to contionue, or enter new node: \n (0,1): ");
    scanf("%d", &choice);
    if (choice)
    {
        add = (node *)malloc(sizeof(node));
        printf("enter the data u want to insert at end: ");
        scanf("%d", &add->data);
        add->next = 0; // garbage value are assigned so do the next 0;

        /*insert at end*/
        while (temp->next != 0)
        {
            temp = temp->next;
        }

        temp->next = add;
        // add = temp; //temp++
    } // end of insertion at end

    temp = head;
    while (temp != 0)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
    }

    return 0;
}