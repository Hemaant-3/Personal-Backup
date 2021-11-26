/*
Wap  to input a number and sum of  odd number up to that number.
wap to input a ten number and find their sum.
wap to input a number and find its factorial.
write a program to given series 1,2,4,8...,16...256.
wap to input 10 ten number and find its greatest number.
wap to input n numbers and count even numbers.
*/
#include<stdio.h>
int main()
{
    int a, sum, i;
printf("Input the number\n");
scanf("%d", &a);
for(int i = 0; i<a; i++)
{    
    if(i%2==1)
    {
        sum = i;
    }
}
    printf("%d\n", sum);

    return 0;
}