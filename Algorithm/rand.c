#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("enter the any number: ");
    scanf("%d", &a);
    for (int  i = 0; i < a; i++)
    {
        printf("%d\n", rand());
    }
    
return 0;
}