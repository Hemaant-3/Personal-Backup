#include <stdio.h>
#include <string.h>
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
// for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
       
//     }
    
    printf("\n the max element is = %d\n", arr[size-1]);
    printf("the min element is = %d",arr[0]);
    return 0;
}