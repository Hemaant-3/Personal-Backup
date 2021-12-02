#include<stdio.h>
 int a;
int main()
{
   
    printf("Number of table you want\n");
    scanf("%d", &a);
for (int i = 1; i <= 10; i++)
{
        printf("%d\n", a * i);
}

    return 0;
}
