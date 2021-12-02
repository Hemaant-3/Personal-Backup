#include<stdio.h>
int main()
{
    /*
printing Alphabetic number by their skii values using numeric
    */
for (int i = 1; i <= 27; i++)
{
    for (int j = 1; j <=27-i ; j++)
    {
        printf("%c  ", 64+j);
    }
    printf("\n");
}


return 0;
}