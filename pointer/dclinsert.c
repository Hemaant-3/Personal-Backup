#include <stdio.h>
#include <stdlib.h>
#include "doublycir.c"
void insertatbeg()
{
    if (head == 0)
    {
        printf("No list found: ");
    }
    else
    {
        nod *newnode;
        newnode = (nod *)malloc(sizeof(nod));
        printf("enter the element to insert: ");
        scanf("%d", &newnode->data); // creation of newnode to insert.
        newnode->next = head;
        head->prev = newnode;
        newnode->prev = tail;
        tail->next = newnode;
        head = newnode;
    }
}
void insertatend()
{
    if (head == 0)
    {
        printf("No list found");
    }
    else
    {
        nod *newnode;
        newnode = (nod *)malloc(sizeof(nod));
        printf("enter the data to store: ");
        scanf("%d", &newnode->data);
        // condition is start now.
        newnode->next = head;
        newnode->prev = tail;
        tail->next = newnode;
        head->prev = newnode;
        tail = newnode;
    }
}
void insertatpos()
{
    nod *newnode, *temp;
    int pos, i = 1;
    newnode = (nod *)malloc(sizeof(nod));
    printf("enter the position: ");
    scanf("%d",&pos);
    printf("enter the data: ");
    scanf("%d", &newnode->data);
    if (head == 0)
    {
        printf("no list found");
    }
    else
    {

        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next->prev = newnode;
        temp->next = newnode;
    }
}
int main()
{
    create();
    display_list();
    // insertatbeg();
    insertatpos();
    // insertatend();
    display_list();
    return 0;
}