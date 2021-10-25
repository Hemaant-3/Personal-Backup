#include<stdio.h>
int main()
{
int a[50], size, i, num, pos;
printf("enter size of array\n");
scanf("%d", &size);
printf("enter element of array\n");
for ( i = 0; i < size; i++)
{
    scanf("%d", &a[i]); //inserting data in array
}
printf("enter the data you want to insert\n");
scanf("%d", &num);
printf("enter the position\n ");
scanf("%d", &pos);
if (pos<=0||pos>size+1)
{
    printf("invalid position\n"); 
} else
{
    for ( i = size-1; i >=pos-1; i--)
    {
        a[i+1] = a[i];
    }
    a[pos-1] = num;
    size++;
}
for(i = 0; i<size;i++)
{
    printf("%d, ", a[i]);
}


return 0;
}