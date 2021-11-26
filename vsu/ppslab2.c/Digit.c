#include<stdio.h>
int main()
{
/*
this code will print your digit entered by user.\
reversal number.
*/
int digit;
scanf("%d", &digit);
while(digit !=0)
{
    int sum = digit%10;
    printf(" %d  ", sum);
    digit = digit/10;
}

return 0;
}