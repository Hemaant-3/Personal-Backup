#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20];
    int size;
    printf("Enter the size of an element: ");
    scanf("%d", &size);
    printf("Enter the element in array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    // logic for insertion sort
    int temp;
    for (int j = 1; j < size; j++)
    {
        temp = a[j];
        int l = j - 1;
        while (l >= 0 && a[l] > temp)
        {
            a[l + 1] = a[l];
            l--;
        }
        a[l + 1] = temp;
    }
// logic for printing the array
for (int k = 0; k < size; k++)
{
    printf("%d, ",a[k]);
}

    return 0;
}