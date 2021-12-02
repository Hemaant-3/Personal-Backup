
#include <stdio.h>
#include <stdlib.h> // calloc,malloc, define inthis libr.
int main()
{
//     // using of malloc() intiliaze with garbage value
//     int *ptr;
//     int n; // intialaizing size of memory  by n
//     printf("please enter a array size.\n");
//     scanf("%d", &n);

//     ptr = (int *)malloc(n * sizeof(int));

//     for (int i = 0; i < n; i++)
//     {
//         printf("the no at %d is\n", i);
//         scanf(" %d", &ptr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("the value at %d is %d\n", i, ptr[i]);
//     }

//     return 0;
// }

 // using of calloc()..... it is almost intiliaze with 0;
    int *ptr;
    int n; // intialaizing size of memory  by n
    printf("please enter a array size.\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("the no at %d is\n", i);
        scanf(" %d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at %d is %d\n", i, ptr[i]);
    }

//use of realloc to resize memory
      printf("please enter a new array size.\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("the no at %d is\n", i);
        scanf(" %d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at %d is %d\n", i, ptr[i]);
    }
// free(ptr);
    return 0;
}