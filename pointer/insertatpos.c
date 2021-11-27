#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
int main()
{
    int choice, pos,t;
    int count = 0;
    node *newnode, *temp, *head, *add;
    head = 0;
    while (t){
        newnode = (node *)malloc(sizeof(node));
    printf("enter the data=> ");
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
    printf("do you want to contionue, or enter new node: \n (0,1): ");
    scanf("%d", &t);
    }
    temp = head;
    printf("enter the 0 for skip and 1 for adding node at specific position: ");
    scanf("%d", &choice);
    if (choice)
    {
        printf("enter the position: ");
        scanf("%d", &pos);
        add = (node *)malloc(sizeof(node));
        printf("enter the data=>  ");
        scanf("%d", &add->data);
        while (count <= pos)
        {
            temp = temp->next;
            count = count+1;
        }
        add->next = temp->next;
        temp->next = add;
    }
    temp = head;

    while (temp != 0)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
    }

    return 0;
}