#include <stdio.h>
#include "fncl.c"
#include <stdlib.h>
void insertatbeg()
{
    newnode = (nod *)malloc(sizeof(nod));
    printf("Enter the data insert at beg: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;

    if (head == 0)
    {
        head = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->next = head;
        head = newnode;
    }
}

void insertatend()
{
    newnode = (nod *)malloc(sizeof(nod));
    printf("enter the data to insert at end: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (head == 0)
    {
        head = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->next = head;
        tail = newnode;
    }
}
void insertatpos()
{
    int i = 1;
    nod *temp;
    temp = head;
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    newnode = (nod *)malloc(sizeof(nod));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (head == 0)
    {
        head = temp;
    }
    else
    {
        while (i < pos-1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
int main()

{
    createc();
    dispc();
    insertatpos();
    dispc();
    return 0;
}