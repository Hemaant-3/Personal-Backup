#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next, *prev;

} nod;
nod *head, *tail, *newnode;

void create()
{
    /* Creating the linkedlist*/
    nod *temp;
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
        scanf("%d ", &choice);
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
}
void addatbeg()
{
    /* adding the element at begining */
    newnode = (nod *)malloc(sizeof(nod));
    printf("\nenter the data you want to store: \n");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = head;
    head = newnode;
}
void addatend()
{
    /* adding at end of linkedlist */
    newnode = (nod *)malloc(sizeof(nod));
    printf("\nenter the data you want to store: \n");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int main()
{
    create();
    print();
    // addatbeg();
    addatend();
    print();
    return 0;
}