#include<stdio.h>
#include <conio.h>
#include<string.h>

int main()
{
int num1, num2;
int add_res, sub_res, mul_res, idiv_result, mod_res;
float fdiv_res = 0;

printf("Enter your first number\n");

scanf("%d", &num1);
getchar();

printf("Enter your second number \n");

scanf("%d", &num2);

add_res = num1 + num2;
sub_res = num1 - num2;
mul_res = num1 * num2;
idiv_result = num1 / num2;
mod_res = num1 % num2;
fdiv_res = (float)num1 / num2;

printf("your output is:\n");

printf("%d + %d = %d\n", num1, num2, add_res);
printf("%d - %d = %d\n", num1, num2, sub_res);
printf("%d * %d = %d\n", num1, num2, mul_res);
printf("%d / %d = %d\n", num1, num2, idiv_result);
printf("%d moduls %d = %d\n", num1, num2, mod_res);
printf("%d / %d = %f\n", num1, num2, fdiv_res);

return 0;
}
