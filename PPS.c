#include<stdio.h>
#include<string.h>
int main()
{
    float y;
    int n, x, a, b;
printf("Enter value of n,:\n");

scanf("%d", &n);
// getchar();
printf("Enter value of x,:\n");
scanf("%d", &x);

printf("Enter value of a,:\n");
scanf("%d", &a);
printf("Enter value of b :\n");

scanf("%d", &b);

if (n =1 )
{
    y = (a*x)% b;
    printf("the value of y is %.2f", y);
} else if (n = 2)
{
    y = (2*a) + (2*b);
    printf("the value of y is %.2f", y); 
}
else if (n = 3)
{
    y = a - (b*x);
    printf("the value of y is %.2f", y);
}else if (n = 4)
{
  y = a+(x/b);
printf("the value of y is %.2f", y);
}
return 0;
}
/*
Wap  to input a number and sum of upto that odd number.
wap to input a ten number and find theit sum.

*/