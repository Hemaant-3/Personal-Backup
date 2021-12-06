#include <stdio.h>
#include <stdlib.h>
#include "insertdl.c"


void delatbeg()
{
    /* delete the element at begning */
    nod *temp;
    temp = head;
    head = temp->next;
    head->prev = 0;
    free(temp);
}
void delatend(){
    /* delete last element in the list */
    nod* temp;
    temp = tail;
    tail = temp->prev;
    tail->next = 0;
    free(temp);
}
void delpos(){
    int pos, i=0;
    nod *temp;
    temp = head;
    printf("enter the position you want to delete: ");
    scanf("%d", &pos);
    while (i<pos-1)
    {
       temp= temp->next;
       i++;
    }
    temp->next->prev = temp -> prev;
    temp->prev->next = temp->next;
    free(temp);
}
int main()
{
    // int a,b;
    create();
    // printf("enter 1 for remove first element of list and 0 for skip the removing: ");
    // scanf("%d", &a);
    // if(a){
    // delatbeg();
    // }
    //     printf("enter 1 for remove last element of list and 0 for skip the removing: ");
    // scanf("%d", &b);
    // if (b)
    // {
    //     delatend();
    // }
    print();
    delpos();
    print();
    return 0;
}