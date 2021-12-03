#include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// int arr[] = {12};
// int len = sizeof(arr)/sizeof(arr[0]);
// printf("%d", len);
// return 0;
// }

    int main()
    {
            int arr[20];
            int n ;
            printf("enter the size of an array: ");
            scanf("%d", &n);
            printf("enter the element in array: \n");
            for (int  i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }
               int sum, l=0;
       for(int i = 0; i<n; i++)
       {
        for(int j = i+1; j<n; j++)
        {
       for(int k = i+j; k<n; k++)
       {
         sum = arr[i]+arr[j]+arr[k];
         if(sum == 0)
         {
        l = l+1;
         }
          
       
    }
    }
       }
       printf(" the nuber of cobination is : %d", l);
            return 0;
    
    }