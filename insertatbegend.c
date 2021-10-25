#include<stdio.h>
int main()
{
int a[50], size;
int i, num;

printf("enter size of an array\n");
scanf("%d", &size);
printf("enter the element of array\n");
for(i=0; i<size;i++){
    scanf("%d", &a[i]);
}
printf("enter the data u want to insert at end: ");
scanf("%d", &num);
a[size] = num;  //inserting at end no swap is required
size++;
for ( i = 0; i < size; i++)
{
    printf("%d \n", a[i]);
}


return 0;
}