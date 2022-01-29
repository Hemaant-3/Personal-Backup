#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} nod;
nod *front = 0;
nod *rear = 0;
nod *newnode;
void enqueue()
{
    int x;
    printf("enter the data: ");
    scanf("%d", &x);

    
    newnode = (nod *)malloc(sizeof(nod));
    newnode->data = x;
    newnode->next = 0;
    if (front == 0 && rear == 0)
    {
        rear = front = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void dequeue()
{
    nod *temp = front;
    if (front == 0 && rear == 0)
    {
        printf("queue is empty");
    }
    else
    {
        front = front->next;
        free(temp);
    }
}
void display()
{
    nod *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("queue is empty");
    }
    else
    {
        while (temp != 0)
        {
            printf("%d, ", temp->data);
            temp = temp->next;
        }
    }
}
void peek()
{
    if (rear == 0 && front == 0)
    {
        printf("list is empty");
    }
    else
    {
        printf("Front element is %d",front->data);
    }
}
int main()
{
int ch;
do
{
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.peek\n0.exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        enqueue();
        break;
    case 2:
    dequeue();
    break;
    case 3:
    display();
    break;
    case 4:
    peek();
    break  ;
    default: printf("Invalid input");
        break;
    }   
} while (ch!=0);

    return 0;
}