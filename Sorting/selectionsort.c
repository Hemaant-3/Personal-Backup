#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[20];
int size;
printf("Enter the size of an array: ");
scanf("%d",&size);
printf("Enter the element: ");
for (int  i = 0; i < size; i++)
{
    scanf("%d",&a[i]);
}
// logic for selection sort
for ( int i = 0; i < size-1; i++)
{
   int min = i;
   for (int j = i+1; j < size; j++)
   {
        if (a[j]<a[min])
        {
            min = j;
        }
        
   }
   if (min!=i)
   {
       int temp = a[min];
       a[min] = a[i];
       a[i] = temp;
   }
   
}
// end of selection sort
for (int i = 0; i < size; i++)
{
    printf("%d,",a[i]);
}

return 0;
}