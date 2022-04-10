#include<stdio.h>
#include<stdlib.h>
int main()
{
int ar[20];
int element;
int size;
printf("ENTER the size of an array: ");
scanf("%d",&size);
printf("Enter the element in array: \n");
for (int i = 0; i < size; i++)
{
    scanf("%d",&ar[i]); 
}
printf("Enter the element to search: ");
scanf("%d",&element);
// searching algorithim
int j;
for (j = 0;j < size; j++)
{
    if (ar[j]==element)
    {
        printf("Found element at index: %d",j);
        break;
    }
    
}
if (j==size)
{
    printf("element not found");
}


return 0;
}