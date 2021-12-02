#include<stdio.h>
#include<stdlib.h>
int main()
{
printf("the file name is %s\n", __FILE__);
printf("Time is now %s\n", __TIME__);
printf("Line No. is   %d\n", __LINE__);
printf("ANSI : %d\n", __STDC__);

return 0;
}