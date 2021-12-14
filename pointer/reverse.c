#include <stdio.h>
#include <stdlib.h>
#include "insertdl.c"
void reverse()
{
    nod *prevno, *current, *nextt;
    prevno = 0;
    current = nextt = head;
    while (nextt != 0)
    {
        nextt = nextt->next;
        current->next = prevno;
        prevno = current;
        current = nextt;

    }
    head = prevno;
}
int main()
{
create();
print();
reverse();
print();
    return 0;
}