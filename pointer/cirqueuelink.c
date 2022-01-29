#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} nod;
nod *front = 0;
nod *rear = 0;
void enqueue()
{
    int x;
    printf("Enter the data part: ");
    scanf("%d", &x);
    nod *newnode;
    newnode = (nod *)malloc(sizeof(nod));
    newnode->data = x;
    newnode->next = 0;
    if (rear == 0)
    {
        front = rear = newnode;
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}
void dequeue()
{
    nod *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("queue is empty");
    }
    else if (rear == front)
    {
        printf("dequeue element is: %d",temp->data);
        front = rear = 0;
        printf("queue is now empty");
    }
    else
    {
        printf("dequeue element is: %d",temp->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}
void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("queue is empty");
    }
    else
    {
        printf("The front element is: %d", front->data);
    }
}
void display()
{
    nod *temp;
    temp = front;
    while (temp->next != front)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("%d, ", temp->data);
}
int main()
{
    int ch;
    do
    {
        printf("\n0.exit\n1.enqueue\n2.dequeue\n3.peek\n4.display\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("Invalid input please choose carefully");
            break;
        }
    } while (ch != 0);

    return 0;
}