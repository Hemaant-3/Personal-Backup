#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[] = {20,14,16,8,9,10};
int l = 6;
for (int i = 0; i < l-1; i++)
{
    int swap = 0; // optional optimisation.
    for (int j = 0; j < l-i-1; j++)
    {
        if (a[j]>a[j+1])
        {
            int swap = 1;
            int temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp; 
        }
        
    }
    if (swap==0)
    {
        break; // for optimisation we check 
    }
    
}
for (int i = 0; i < l; i++)
{
    printf("%d,",a[i]);
}


return 0;
}