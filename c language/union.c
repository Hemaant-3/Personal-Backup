#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int j = 0;
int i = 0;
int u[100];
int *a[] = {12,45,53,43,23,22};
int *b[] = {20,23,43,28,22,45};
int size = 5;
/* union logic for c */

while (*a!= NULL || *b !=NULL)   
{
    i = i + 1;
    if (*a[i] = NULL)
    {
        u[i] = a[i];
    } else
    {
        u[i] = b[i];
    }
    
    
    
}
while (*a!=NULL || *b != NULL)
{
    j = j+1;
    printf("%d", u[j]);
}


return 0;
}

