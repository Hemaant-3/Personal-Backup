#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
typedef struct node
{
    int data;
    struct node *next, *prev;

} nod;
nod *head=0, *tail, *newnode;

void create()
{
    /* Creating the linkedlist*/

    head = 0;
    int choice;
    while (choice)
    {
        newnode = (nod *)malloc(sizeof(nod));
        printf("enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;

        if (head == 0)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("Enter 0 for exit and 1 for add newnode: ");
        scanf("%d", &choice);
    }
}

void print()
{
    /* printing the list*/
    nod *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void addatbeg()
{

    /* adding the element at begining */
    newnode = (nod *)malloc(sizeof(nod));
    printf("enter the data you want to store:");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = head;
    head = newnode;
}
void addatend()
{
    /* adding at end of linkedlist */
    newnode = (nod *)malloc(sizeof(nod));
    printf("enter the data you want to store: ");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int insertatpos()
{
    /* insert at specific position*/
nod *temp;
    temp = head;
    int pos;
    int i = 1;
    printf("enter the position you want to insert: ");
    scanf("%d", &pos);
    newnode = (nod *)malloc(sizeof(nod));
    printf("\nenter the data to insert: ");
    scanf("%d", &newnode->data);
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next = newnode;
    temp->next->prev = newnode;
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     create();
//     addatend();
//     print();
//     addatbeg();
//     print();
//     insertatpos();
//     print();
//     return 0;
// }