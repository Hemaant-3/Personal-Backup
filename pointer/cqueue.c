#include <stdio.h>
#include <stdlib.h>
#define n 5
// Implementation of circular queue using array
int queue[n];
int front = -1;
int rear = -1;
void enqueue()
{
    int x;
    printf("enter the data: ");
    scanf("%d", &x);
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % n == front)
    {
        printf("overflow condition!!!");
    }
    else
    {
        rear = (rear + 1) % n;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else if (front == rear)
    {
        printf("dequeue element is: %d", queue[front]);
        front = rear = -1;
        printf("queue is empty");
    }
    else
    {
        printf("dequeue element is: %d", queue[front]);
        front = (front + 1) % n;
    }
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        int x = front;
        printf("queue is: ");
        while (x != rear)
        {
            printf("%d, ", queue[x]);
            x = (x + 1) % n;
        }
        printf("%d", queue[rear]);
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n0.Exit\n1.enqueue\n2.dequeue\n3.display\n");
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
            display();
            break;
        default:
            printf("Invalid input");
            break;
        }
    } while (ch != 0);

    return 0;
}