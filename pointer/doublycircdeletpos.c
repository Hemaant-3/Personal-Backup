#include <stdio.h>
#include <stdlib.h>

#include "doublycir.c"
void delete ()
{
    int i = 1, pos;
    nod *temp;
    temp = head;
    printf("enter the position");
    scanf("%d", &pos);
    if (pos < 1)
    {
        printf("invalid");
    }
    else
    {
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next ->prev = temp->prev;
        if (temp->next==head)
        {
            tail = temp->prev;
            free(temp);
        }
        else
        {
            free(temp);
        }
        
        
           }
}
int main()
{
    create();
    display_list();
    delete();
    display_list();     

    return 0;
}