#include <stdio.h>
int main()
{
    int temp;
    int size;
    int arr[20];
    printf("enter the size of an array : ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("please enter the number  : ");
        scanf("%d", &arr[i]);
    }

    for (int k = 0; k < size; k++)
    {
        for (int j = 1+k; j < size; j++)
        {
            if(arr[k]>arr[j]){
                temp = arr[k];
                arr[k] = arr[j];
                arr[j] = temp;
            }
            // printf("%d ", arr[j]);
        }
    }
for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
       
    }
    return 0;
}