#include<stdio.h>
int main()
{
int num, b;
int a = 1;
printf("Enter Your number to get\n");
scanf("%d", &b);
while (a<10)
{
    num = a * b ;
    printf("%d x %d = %d\n", b, a, num);
    a++;
}

return 0;
}
/* 
writ a program to calculate average of first n numbers where n is user given no.

wap to display the sqaure of first n natural number 
*/