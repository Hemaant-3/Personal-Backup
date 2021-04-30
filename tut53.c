#include<stdio.h>
int main()
{
int a= 35;
int *ptr = NULL;
if(ptr != NULL)
{

printf("this is value of pointer %d\n", *ptr);
return 0;
}else{
    printf("THe ponter is null, hence it can't be derefenced");
}
}