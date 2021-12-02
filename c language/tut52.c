#include<stdio.h>
int main()
{
int a = 34;
float b = 3.6;

void *ptr;
ptr = &a;

printf("the value %d\n", *((int *) ptr)); //typecasing into int.

ptr = &b;
printf("%f\n", *((float *) ptr));
return 0;
}