#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} nod;
nod *tail;
void display_list()
{
    nod *temp;
    temp = tail->next;
    while (temp->next != tail->next)
    {
        printf("%d, ", temp->data);
    }
    printf("%d", temp->data);
}
void create_doublyCirclist(){
    nod
}
int main()
{

    return 0;
}