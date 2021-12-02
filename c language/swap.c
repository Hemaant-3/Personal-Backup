#include<stdio.h>
int main()
{
int  b;
int a;
printf("Enter your no.\n");
scanf("%d%d", &a, &b);

a = b;
b = a;
printf("the a number is%d and b is %d", a, b);

return 0;
}