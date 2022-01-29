#include <stdio.h>
#include <stdlib.h>
#define n 5
int s1[n];
int s2[n];
int top1 = -1;
int top2 = -1;
int count = 0;
void push1(int data)
{
    top1++;
    s1[top1] = data;
}
int pop1()
{
    int q= s1[top1];
    top1 = top1-1;
    return q;
}
void push2(int a)
{
    top2++;
    s2[top2] = a;
}
int pop2()
{
    int z = s2[top2];
    top2--;
    return z;
}
void enqueue()
{
    int x;
    printf("enter the data: ");
    scanf("%d", &x);
    push1(x);
    count++;
}
void dequeue()
{
    int i, a, b;
    if (top1 == -1 && top2 == -1)
    {
        printf("Empty queue s1" );
    }
    else
    {
        for (i = 0; i < count; i++)
        {
            a = pop1();
            // printf("%d",a);
            push2(a);
        }
        b = pop2();
        printf("pop element is: %d", b);
        count--;
        for (int j = 0; j < count; j++)
        {
            a = pop2();
            // printf("\n %d",a);
            push1(a);
        }
    }
}
void display()
{
    for (int i = 0; i <= top1; i++)
    {
        printf("%d, ", s1[i]);
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n0.exit\n1.enqueue\n2.dequeue\n3.display\n");
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
            printf("Invalid choice");
            break;
        }
    } while (ch != 0);

    return 0;
}