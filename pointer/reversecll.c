#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} nod;
nod *tail;
void disp_list()
{
    printf("printing the list\n");
    nod *temp;
    temp = tail->next;
    while (temp->next != tail->next)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
}
void reverse_list()
{
    printf("\nreversing the list\n");
    nod *current_node, *next_node, *prev_node;
    current_node = tail->next;      // initilaize at head.
    next_node = current_node->next; // intiliaze at head+1.
    while (current_node != tail)    // iterating upto current = tail
    {
        prev_node = current_node;       // initializing prev node;
        current_node = next_node;       // current_node++;
        next_node = current_node->next; // next_node++;
        current_node->next = prev_node; // assign address of prev_node to current node to reverse list.
        // repeating these steps until current reached to tail and nextnode reach to head;
    }
    next_node->next = tail; // or current_node, to maintain cirular list.
    tail = next_node;       // tail++;
}

int main()
{

    nod *head = 0, *newnode;
    int choice = 1;
    while (choice)
    {
        newnode = (nod *)malloc(sizeof(nod));
        printf("enter the data to store in node: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            tail = head = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        printf("enter 0 to exit and 1 for add newnode: ");
        scanf("%d", &choice);
    }
    tail->next = head;
    // end of list creation.
    disp_list();
    reverse_list();
    disp_list();
    return 0;
}