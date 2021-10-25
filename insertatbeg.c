#include<stdio.h>
int main()
{
int a[50], i, size, num; // insert at begning
printf("enter the size of an array\n");
scanf("%d", &size);
printf("enter the element in array\n ");
for(i= 0; i<size; i++){
    scanf("%d", &a[i]);
}
printf("enter the num you want to inset at begning: ");
scanf("%d", &num);

/* inserting the element at the begning of an array */
for(i = size-1; i>=0; i--){
    a[i+1] = a[i];
}
a[0]  = num;
size++;
/// insertion is over
for(i = 0; i<size; i++){
    printf("%d, ", a[i]);
} 
return 0;
}