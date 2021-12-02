#include<stdio.h>
int main()
{
    int a, b, c;
printf("Enter the 3 numbers\n");
scanf("%d%d%d", &a, &b, &c);
if (a<b)
{
    if (b<c)
    {
        printf("Largest Number is:%d", c);
    } else
    {
        printf("Largest Number is:%d", b);
    }
    }
    else if (a>c)
    {
printf("the largest number is %d", a);
    }
    else
    {

    printf("Largest Number is:%d", c);
}
return 0;
}