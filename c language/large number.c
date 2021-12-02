#include<stdio.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int large, num1, num2;

printf("Enter your first number\n");
scanf("%d", &num1);
getchar();
printf("Enter yor second number\n");
scanf("%d", &num2);

large = num1>num2?num1:num2;
printf("\n\nLarge number is: %d", large);
    return 0;
}
