#include <stdio.h>
#include <stdlib.h>
/* Implementation of queue using arrray */
int queue[5];
int front = -1;
int rear = -1;
void enqueue()
{
    int x;
    printf("enter the data to add in queue");
    scanf("%d", &x);
    if (rear > 5)
    {
        printf("overflow condition!!!!!");
    }
    else if (rear == -1 && front == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else if (rear == front)
    {
        front = rear = -1;
    }
    else
    {
        printf("dequeue element is : %d", queue[front]);
        front++;
    }
}
void display()
{
    if (rear == -1 && front == -1)
    {
        printf("queue is empty: ");
    }
    else
    {
        for (int i = front; i < rear+1; i++)
        {
            printf("%d,", queue[i]);
        }
    }
}
void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("the front element is %d", queue[front]);
    }
}
int main()
{
    int ch;
    do
    {
        printf("\nenter\n1.enqueue\n2.dequeue\n3.peek\n4.display\n0.exit\n");
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
            peek();
            break;
        case 4:
            display();
            break;

        default:
            printf("invalid choice");
            break;
        }
    } while (ch != 0);

    return 0;
}