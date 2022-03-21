#include <stdio.h>
#include <stdlib.h>

void toi(number, start, aux, end)
{
    if (number== 1)
        {
            printf("\nMoving disc Start to End \n");
           goto label;
        }
    toi(number-1,start,end,aux);
    printf("\nMoving disc %d from %s to %s", number,start,end);
    toi(number-1,aux,start,end);
   label:
   printf("");
}
int main()
{
toi(3,"A","B","C");
    return 0;
}