#include "doublycir.c"
#include <stdio.h>
#include <stdlib.h>
void delatbeg()
{
    nod *temp;
    temp = head;
    printf("\ndeleting the first element\n");
    if (head == 0)
    {
        printf("invalid list");
    }
    else if (temp->next == head)
    {
        temp = head = 0;
        free(temp);
        printf("empty list");
    }
    else

    {
        head = head->next;
        head->prev = tail;
        tail->next = head;
        free(temp);
    }
}
void delatend()
{
    printf("\ndeleting the last element\n");
    nod *temp;
    temp = tail;
    if (tail == head)
    {
        free(temp);
        printf("list is empty");
    }
    if (head == 0)
    {
        printf("invalid list");
    }
    else
    {
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
        free(temp);
    }
}

// void delatpos()
// {
//     printf("\ndeleting the given position of element\n");
//     int pos, i = 1;
//     nod *temp;
//     nod *previous, *next;
//     temp = tail->next;
//     printf("enter the position to delete: ");
//     scanf("%d", &pos);

//     while (i < pos-1)
//     {
//         temp = temp->next;
//         i++;
//     }
//     previous =  temp->prev;
//     next = temp ->next;
//     previous->next = temp->next;
//     next->prev = temp->prev;
//     free(temp);
    // if (temp->next == head)
    // {
    //     tail = temp->prev;
    //     free(temp);
    // }
    // else
    // {
    //     free(temp);
    // }
}

int main()
{
    create();
    display_list();
    // delatbeg();
    // delatend();
    delatpos();
    display_list();
    return 0;
}