#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char *a;
a = (char*)malloc(10*sizeof(char));
strcpy(a,"Hemantk");
printf("%s\n", *a);
return 0;
}