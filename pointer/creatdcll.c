#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *prev, *next;
} nod;
nod *head, *tail;
void display_list()
{
    nod *temp = head;
    while (temp != tail)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
}
void createdcl()
{
    head = 0;
    nod *newnode;
    int choice = 1;
    while (choice)
    {
        newnode = (nod *)malloc(sizeof(nod));
        printf("enter the data: ");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            tail = head = newnode;
            head->prev = head;
            head->next = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head;
            head->prev = newnode;
            tail = newnode; // tail++
        }
        printf("enter 0 to skip adding and 1 for keep adding node: ");
        scanf("%d", &choice);
    }
}
int main()
{
    createdcl();
    display_list();
    // printf("1st element id: %d", tail->next->data);
    // printf("last element id: %d", head->prev->data);
    return 0;
}