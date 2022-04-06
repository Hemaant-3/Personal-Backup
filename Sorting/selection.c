#include<stdio.h>
#include<stdlib.h>
int main()
{
int arr[] = {12,3,4,6,8,10};
int len = 6;
int temp;
for (int i = 0; i < len-1; i++)
{
    int min = i;
    for (int j = i+1; j < len; j++)
    {
        if (arr[j]<arr[min])
        {
            min = j;
        }
        
    }
    if (min!=i)
    {
        // swaping
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    
    
}
for (int i = 0; i < len; i++)
{
    printf("%d,",arr[i]);
}


return 0;
}