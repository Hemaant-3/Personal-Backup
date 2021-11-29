#include <stdio.h>
#include <stdlib.h>
int main()
{
    typedef struct node
    {
        int data;
        struct node *next;
    } node;
    int choice, t;
    node *newnode, *temp, *head, *prev = 0;
    head = 0;

    while (choice)
    {
        newnode = (node *)malloc(sizeof(node));
        printf("enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("enter 0 to exit and 1 for add new node: ");
        scanf("%d", &choice);
    } // close insertion of linkedlist
    temp = head;
    /* logic for delete at end*/

    while (temp->next != 0) //(last -1 tk iterate hota h)
    {
        prev = temp;       // (last - 1) tk loop chalega
        temp = temp->next; // have null address
        
    }  
    printf("enter 0 to exit and 1 for del last element: ");
    scanf("%d", &t);
 
    if(t)
    {
        if (head == temp)
        {
            head = 0;
        }
        else
        {
            prev->next = 0;
        }
        free(temp);
    }

temp = head;

    while (temp != 0)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
       }
    return 0;
}