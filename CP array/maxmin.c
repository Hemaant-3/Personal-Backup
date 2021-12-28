#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[3][4] = {{1, 3, 5, 7},
                   {10, 11, 16, 20},
                   {23, 30, 34, 60}};
int max = 0;
int min = a[0][0];
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        if (a[i][j]<min)
        {
            min = a[i][j];
        }
        if (a[i][j]>max)
        {
            max = a[i][j];
        }
        
        
    }
    
}
printf("Max = %d, min = %d", max, min);
return 0;
}