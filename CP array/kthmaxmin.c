#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int a[] = {1,2,3,4,5,6,7,8};
int k;
printf("enter the k element: ");
scanf("%d", &k);
for (int i = 0; i < 8; i++)
{
    for (int j = i+1; j < 8; j++)
    {
        if(a[i]>a[j])
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}

    printf("the Min kth element is: %d", a[k-1]);
    printf("\nthe MAx kth element is: %d", a[7]);


return 0;
}