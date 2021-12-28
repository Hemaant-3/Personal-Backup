#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3][4] = {{1, 3, 5, 7},
                   {10, 11, 16, 20},
                   {23, 30, 34, 60}};
    int ele;
    int b = 0;
    printf("enter the element to find in matrix: ");
    scanf("%d", &ele);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] == ele)
            {
                b = 1;
                goto end;
            }
            else
            {
                b = 0;
            }
        }
    }
end:
    if (b == 1)
    {
        printf("element is present: %d", ele);
    }
    else
    {
        printf("element is not present: %d", ele);
    }

    return 0;
}