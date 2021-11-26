#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int generateRandomNo(int a)
{
    //input n end number to generate b\w 0 to n.
    srand(time(NULL));
    return rand()%a;
}

int main()
{
// srand(time(NULL)); // generating random no. b\w 1 to 100.
// printf("the random number is %d\n", rand()%100);
printf("The random is %d\n", generateRandomNo(100));

return 0;
}