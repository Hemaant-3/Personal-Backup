#include <stdio.h>
#include <stdlib.h>
int stack[5];
int top = -1;
void push()
{

    int x;
    printf("Enter the data: ");
    scanf("%d", &x);
    if (top == 5 - 1)
    {
        printf("overflow condition");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("underflow condition");
    }
    else
    {
        top--;
        printf("\n %d\n", stack[top]);
    }
}
void peek()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("\n %d\n", stack[top]);
    }
}

void display()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("\n %d", stack[i]);
        }
    }
}
int main()
{
    int ch;
    do
    {
        printf("\nEnter the choice: \n 1:push\n2:pop\n3:peek\n4:display\n:-");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("Invalid choice");
            break;
        }
    } while (ch != 0);

    return 0;
}