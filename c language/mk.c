#include<stdio.h>
int main(int argc, char const *argv[])
{
    char count;
    char a;
   scanf("%c", &count);
    switch (count)
    {
    case 'a':
        printf("a");
        break;
    // continue;
    default:
    printf("Nothing");
        break;
    }
    return 0;
}
