#include <stdio.h>
#include <math.h>
#include<string.h>
#include<conio.h>
/*
Hemant Kumar Chaudhary, E2, Roll. - 12
*/
int main()
{
    float s, a, b, c, area;
    printf("Enter the length of a, b, c:\n");
    scanf("%f%f%f", &a, &b, &c);
    s = (a + b + c) / 2;
    
    printf("semi perimeter s is =%0.2f\n\n", s);
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of Triangle is=%0.2f", area);
    return 0;
}