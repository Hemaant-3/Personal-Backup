#include <stdio.h>
#include <stdlib.h>
int BinarySearch(int a[], int n, int data)
{
    int l = 0, r = n - 1, mid;
    while (l < r)
    {
        mid = (l + r) / 2;
        // case 1: data==a[mid]
        if (data == a[mid])
        {
            return mid;
        }
        // case2: data is greater than mid
        else if (data < a[mid])
        {
            r = mid - 1;
        }
        // case3: data is less than mid
        else
        {
            l = mid + 1;
        }

        return -1;
    }
}
int main()
{
    int arr[20];
    int size, data;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    printf("Enter the element in array in sorted manner\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search in array: ");
    scanf("%d", &data);
    int result = BinarySearch(arr, size, data);
    if (result > 0)
    {
        printf("Element is present at index: %d", result);
    }
    else
    {
        printf("Element is not present  ");
    }
    

    return 0;
}