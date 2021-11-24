#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
int choice;
    struct node *head, *newnode, *temp;
    head = 0; //checking \zero if it has garbage value then else condition explixit. no head is in else condition
while(choice){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    //ready to Hold data and address
    if (head == 0)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
    
printf("enter choice 0 for exit and 1 for entering next node\n");
scanf("%d", &choice);
}
    temp = head; //again tmep go back to head.

    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next; //updating the temp,.
    }

    return 0;
}