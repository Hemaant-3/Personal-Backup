#include<stdio.h>
#include<stdlib.h>
int main()
{
struct node{
    int data;
    struct node *link;

};
int choice;
struct node *head, *newnode, *temp;

head = 0;
while(choice){
newnode = (struct node*)malloc(sizeof(struct node));
printf("enter the data you want to store : ");
scanf("%d", &newnode->data);
newnode->link = 0;

if (head ==0)
{
    head = temp = newnode; //point to address of newnode
 } else
   {
      temp-> link = newnode;
      temp = newnode; //temp++; 

   }
   printf("enter 1 for exit and 1 for adding next element in list");
   scanf("%d", &choice);
}
   temp = head;

while(temp!=0){
    printf("%d ", temp->data);
    temp = temp->link;
}


return 0;
}