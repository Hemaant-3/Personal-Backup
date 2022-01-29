#include <stdio.h>
#include <stdlib.h>
#define n 3
int deque[n];
int front = -1;
int rear = -1;
void enqueu_front(int x)
{
    if ((front == 0 && rear == n - 1) || (front == rear + 1))
    {
        printf("queue is full");
    }
    else if (front == -1 && rear == -1)
    {
        rear = front = 0;
        deque[front] = x;
    }
    else if (front == 0)
    {
        front = n - 1;
        deque[front] = x;
    }
    else
    {
        front--;
        deque[front] = x;
    }
}
void enqueue_rear(int x)
{
    if ((front == 0 && rear == n - 1) || (front == rear + 1))
    {
        printf("queue is full");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        deque[rear] = x;
    }
    else if (rear == n - 1)
    {
        rear = 0;
        deque[rear] = x;
    }
    else
    {
        rear++;
        deque[rear] = x;
    }
}
void dequeue_front()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else if (rear == front) // checking condition for single element
    {
        front = rear = -1;
    }
    else if (front == n - 1) // pointing to last element
    {
        front = 0;
    }
    else
    {
        printf("the dequeue element is: %d", deque[front]);
        front++;
    }
}
void dequeu_rear()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else if (front == rear) // only one element
    {
        front = rear = -1;
    }
    else if (rear == 0)
    {
        printf("The deque element is: %d", deque[rear]);
        rear = n - 1;
    }
    else
    {
        printf("the deque element is: %d", deque[rear]);
        rear--;
    }
}
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("list is empty");
    }
    else
    {
        while (i != rear)
        {
            printf("%d, ", deque[i]);
            i = (i + 1) % n;
        }
        printf("%d, ", deque[i]);
    }
}
void get_front()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("front element is: %d", deque[front]);
    }
}
void get_rear()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("Rear element is: %d", deque[rear]);
    }
}
int main()
{
    int ch, x;
    printf("\n1.enqueue Front   2.enqueue Rear    3.deque front\n4.deque rear   5.get_front    6.get_rear\n7.display: \n");

    do
    {
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter element to add: ");
            scanf("%d", &x);
            enqueu_front(x);
            break;
        case 2:
            printf("enter element to add: ");
            scanf("%d", &x);
            enqueue_rear(x);
            break;
        case 3:
            dequeue_front();
            break;

        case 4:
            dequeu_rear();
            break;
        case 5:
            get_front();
            break;
        case 6:
            get_rear();
            break;
        case 7:
            display();
            break;
        default:
            printf("Invalid choice");
            break;
        }
    } while (ch != 0);

    return 0;
}