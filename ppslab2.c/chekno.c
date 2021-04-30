#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("The number is: %d", num);
    }
    else if (num < 0)

    {
        printf("the number is negative %d", num);
    } else if (num>0)
    {
        /* code */
        printf("the number is positive: %d", num);
    }
    
    else
    {
        printf("INVALID NUMBER");
    }

    return 0;
}