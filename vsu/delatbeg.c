#include<stdio.h>
int main()
{
int a[50], size;
printf("enter the size of an array: ");
scanf("%d,", &size);
printf("enter the element in array\n");
for (int i = 0; i < size; i++)
{
    scanf("%d", &a[i]);
    }

return 0;
}