#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *temp, *newnode, *head;
void createcll()
{
    int choice;
    head = 0;
    while(choice){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
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
     printf("%d, ",temp->data); //checking
    temp->next = head; // circular condition for singly circular list
    printf("Enter 0 for print and 1 for add newnode: ");
    scanf("%d", &choice);
    //  printf(" after temp = head %d, ",temp->data); //checking
    }
}

void dispcll(){
    temp = head;
    while (temp->next!= head)   
    {
        printf("%d, ",temp->data);
        temp = temp->next;
    }
    printf(" %d", temp->data);
}

int main()
{
createcll();
dispcll();
    return 0;
}