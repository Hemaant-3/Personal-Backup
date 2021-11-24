#include<stdio.h>
#include<stdlib.h>
int main()
{
struct node{
int data; //data of the node
struct node *next; // pointer of the node
};
int choice;
int count = 0;
struct node *newnode,*temp,*head;
head = 0;
while (choice)
{
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the data: \n");
    scanf("%d", &newnode->data);
    newnode -> next = 0;
    //condition for updating head
    if(head==0){
        head = temp = newnode;
    } else
    {
        temp -> next = newnode; //updating the address
        temp = newnode; //pointing temp pointer to next node
    }
    printf("do you want to contionue, or enter new node: \n (0,1)");
    scanf("%d", &choice);
    
}
temp = head;
//for printing the value
while (temp!=0)
{
    printf("%d, ", temp->data);
    temp = temp ->next;
    count++;
}
printf("\n size of linkedlist is: %d", count);


return 0;
}