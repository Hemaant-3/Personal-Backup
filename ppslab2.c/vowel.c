#include<stdio.h>
int main()
{
char chr;
printf("Enter alphabet\n");
scanf("%c", &chr);

switch (chr)
{
case 'a':
case 'A':
    printf("It is vowel");
    break;
    case 'e':
    case 'E':
     printf("It is vowel");
    break;
    case 'I':
    case 'i':
     printf("It is vowel");
    break;
    case 'o':
    case 'O':
     printf("It is vowel");
    break;
    case'u':
    case 'U':
     printf("It is vowel");
    break;
default:
 printf("It is consonent");
    
    break;
}
return 0;
}