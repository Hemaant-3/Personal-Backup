#include<stdio.h>
#include<math.h>
#define PI 3.141

int main()
{
    float area, a;
printf("Enter the radius of circle\n");
scanf("%f", &a);
area = PI * a * a;
printf("\n Area of circle is: %0.2f square unit\n", area);
return 0;
}