#include<stdio.h>
#include "increment.c" // including other file
#define PI 3.14 // this is glolbal variable
#define Sqt(r) r*r // this is macro, small functions
int main()
{
// main1();
printf("this is value of pi %.2f\n\n", PI);
float r = 4;
printf("The area of circle is : %f", Sqt(r)*PI);

return 0;
}