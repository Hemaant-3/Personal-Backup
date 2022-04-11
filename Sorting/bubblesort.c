#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20];
    int size;
    printf("Enter the size of an element");
    scanf("%d", &size);

    printf("Enter the element in array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    // for bubble sort we use most optimize methods to perform sorting
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

for (int i = 0; i < size; i++)
{
    printf("%d,",a[i]);
}

    return 0;
}