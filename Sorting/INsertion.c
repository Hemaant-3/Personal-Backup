#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {20, 5, 14, 16, 8, 9, 10};
    int a = 7;
    int temp, i, j;
    for (i = 0; i < a; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
for ( i = 0; i < a; i++)
{
    printf("%d,",arr[i]);
}

    return 0;
}