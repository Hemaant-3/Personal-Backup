#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
} nod;
nod *top = 0;
void push()
{
    // to push;
    int x;
    nod *newnode;
    printf("enter the data: ");
    scanf("%d", &x);
    newnode = (nod *)malloc(sizeof(nod));
    newnode->data = x;
    newnode->link = top;
    top = newnode;
}
void pop()
{
    if (top == 0)
    {
        free(top);
        printf("list is empty ");
    }
    else
    {

        printf("deleting the element %d", top->data);
        nod *temp;
        temp = top;
        top = top->link;
        free(temp);
    }
}
void peek()
{
    if (top == 0)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d ", top->data);
    }
}
void display()
{
    nod *temp = top;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->link;
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