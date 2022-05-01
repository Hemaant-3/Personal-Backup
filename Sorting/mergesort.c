#include <stdio.h>
#include <stdlib.h>
void Merge();
void mergeSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergeSort(a, lb, mid);
        mergeSort(a, mid + 1, ub);
        Merge(a, lb, mid, ub);
    }
    else
    {
        return;
    }
    
 
}
void Merge(int a[], int lb, int mid, int ub)
{
    int b[20];
    int i = lb;
    int j = mid + 1;
    int k = lb;
    while (i <= mid && j <= ub)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for (int i = 0; i < ub; i++)
    {
        b[i] = a[i];
    }

}

int main()
{
    int a[20];
    int size;
    printf("enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the element of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,size-1);
    for (int i = 0; i < size; i++)
    {
        printf("%d, ",a[i]);
    }
    
    return 0;
}