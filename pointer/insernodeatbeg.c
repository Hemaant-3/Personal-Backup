#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;          //data of the node
    struct node *next; // pointer of the node 
};
int main()
{
    int choice, num;
    int count = 0;
    struct node *newnode,*p, *temp, *head, *add;
    head = 0;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        //condition for updating head
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode; //updating the address
            temp = newnode;       //pointing temp pointer to next node
        }
        printf("do you want to contionue, or enter new node: \n (0,1): ");
        scanf("%d", &choice);
    }
    temp = head;
    printf("do you want to add new node, 0 for no and 1 for yes: \n (0,1): ");
        scanf("%d", &num);
    if(num){
        add = (struct node*)malloc(sizeof(struct node));
        printf("enter the data u want to insert at begning: ");
        scanf("%d", &add->data);
        add->next = head;
        head = temp = add;

    }
    //for printing the value
    while (temp != 0)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\n size of linkedlist is: %d", count);

    return 0;

}

