#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} nod;
nod *tail, *head;

void display_list()
{
    nod *temp;
    
    temp = head;
    while (temp->next != head)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
    printf("\n");
}
void createCircular_list()
{
    nod *newnode;
    head = 0;
    int choice;
    while (choice)
    {
        newnode = (nod *)malloc(sizeof(nod));
        printf("enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        printf("enter 0 for exit and 1 for add new node: ");
        scanf("%d", &choice);
    }
    tail->next = head;
    
        }
void delatbeg()
{
nod *temp;
temp = head;
tail->next = temp->next;
free(temp);
}
int main()
{
    createCircular_list();
    display_list();
   delatbeg();
   display_list();
    return 0;
}