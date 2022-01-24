#include <stdio.h>
#include <stdlib.h>
// Creating Node using structure
typedef struct node
{
    int data;
    struct node *next;
} nod;
// Define pointer to use in program.
nod *newnode, *head=0, *tail;
// Definition of function to creating linkedlist
void create_list()
{
    int choice;
    
    while (choice)
    {
        newnode = (nod *)malloc(sizeof(nod));
        printf("Enter the data: ");
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
        printf("enter the 0 to exit and 1 for add newnode: ");
        scanf("%d", &choice);
    }
    tail->next = head;
}
// Defining display function to display the element in list.
void disp_list()
{
    nod *temp;
    temp = head;
    if (temp != 0)
    {
        while (temp->next != head)
        {
            printf("%d, ", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}
// defining a delete function to delete first element from list.
void delatbeg()
{

    printf("\n delete at begning:\n");
    nod *temp;
    temp = tail->next;
    tail->next = temp->next;
    head = temp->next;
    free(temp);
}
// defining a delete function to delete last element from list.
void deleatend()
{
    nod *current_node, *previous_node;
    current_node = head;
    printf("\ndelete at end\n");
    if (head == 0)
    {
        printf("empty list ");
    }
    else if (head == current_node->next)
    {
        free(current_node);
        printf("List is empty after deletion ):");
        head = 0;
    }
    else
    {

        while (current_node->next != head)
        {
            previous_node = current_node;
            current_node = current_node->next;
        }
        previous_node->next = tail->next;
        tail = previous_node;
        free(current_node);
    }
}
// function for get the length of list.
void get_length()
{
    nod *Inspect;
    Inspect = tail->next;
    int Count = 1;
    while (Inspect->next != head)
    {
        Inspect = Inspect->next;
        Count++;
    }
 printf("\n the total number of element is: %d",Count);
}
// defining a delete function to delete element from a position,
// which is entered through keyboard
void del_at_specific_positon()
{
    int pos, i = 1;
    printf("enter the position of element to delete: ");
    scanf("%d", &pos);
    nod *current_node, *next_node;
    current_node = tail->next;
    while (i < pos - 1)
    {
        current_node = current_node->next;
        i++;
    }
    next_node = current_node->next;
    current_node->next = next_node->next;
    free(next_node);
}
// this is calling function or main function.
int main()
{
    create_list();
    disp_list();
    get_length();

    // delatbeg();
    // deleatend();
    del_at_specific_positon();
    disp_list();        
    return 0;
}