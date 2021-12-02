#include<stdio.h>
#include<stdlib.h>
int main()
{
struct node{
int data;
struct node *next;
};
struct node *newnode, *temp, *head;

newnode = (struct node*)malloc(sizeof(struct node));
printf("enter the data : ");
scanf("%d", &newnode->data);
head = newnode;

if (head == 0)
{
    head = newnode;
    temp = newnode;
}else
{
    head = newnode->next;
   temp = newnode; 
}

while (temp!=0)
{
    printf("%d,", newnode->data);
}



return 0;
}