#include <stdio.h>
#include <stdlib.h>
int partition(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    int temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;
    return end;
}
void quicksort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub); 
    }
}
int main()
{
    int a[20];
    int count;
    printf("Enter the size of an array");
    scanf("%d", &count);
    printf("enter the element in array\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a,0,count);
    for (int j = 0; j < count; j++)
    {
        printf("%d, ",a[j]);
    }
    

    return 0;
}