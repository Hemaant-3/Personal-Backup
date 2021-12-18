#include <stdio.h>
#include <stdlib.h>
typedef struct nod
{
    int data;
    struct nod *next;
} nod;
struct nod *tail, *head, *newnode;

void dispc()
{
    nod *temp;
    temp = head;
    while (temp->next != head)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("%d, ", temp->data);
    printf("\n");
}

void createc()
{
    int choice;
    nod *temp;
    head = 0;
    while(choice){
    newnode = (nod *)malloc(sizeof(nod));
    printf("Enter the data part: ");
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
    tail = temp;
    temp->next = head;

printf("enter 0 to exit loop and 1 for add an element: ");
scanf("%d",&choice);
    }
    head = temp;
}

