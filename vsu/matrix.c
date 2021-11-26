#include<stdio.h>
int main()
{
int arr[3][3];
int i, j;
for( i = 0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        printf("Enter THE Number at index %d aNd %d \n",i ,j);
        scanf("%d", &arr[i][j]);
    }
    int sum = sum + arr[i][j];
printf("%d", sum);
}
for(i = 0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        printf("the array at index %d and %d is %d\n", i, j, arr[i][j]);
    }
}
return 0;
}