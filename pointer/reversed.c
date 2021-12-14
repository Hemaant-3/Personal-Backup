#include <stdio.h>
#include <stdlib.h>
#include "insertdl.c"
void reversed()
{

    /* using iterative methods */
    nod *current, *nexte;
    current = head;
    while (current != 0)
    {
        nexte = current->next;
        current->next = current->prev;
        current->prev = nexte;
        current = nexte;
    }
    current = head;
    head = tail;
    tail = current;
}
int main()
{
create();
print();
printf("\n");
reversed();
print();
    return 0;
}