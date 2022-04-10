#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a1[] = {12, 34, 14, 65, 78, 9};
    int a2[] = {10, 3, 8, 5};
    int len1 = 6;
    int len2 = 4;
    // merging the two array
    int a3[12];
    int i = 0, j = 0, k = 0;
    while (i < len1 && j < len2)
    {
        if (a1[i] < a2[j])
        {
            a3[k] = a1[i];
            k++, i++;
        }
        else
        {
            a3[k] = a2[j];
            k++, j++;
        }
    }
    while (i < len1)
    {
        a3[k] = a1[i];
        i++, k++;
    }
    while (j < len2)
    {
        a3[k] = a2[j];
        j++, k++;
    }

    // printing the list
    for (int l = 0; l < len1 + len2; l++)
    {
        printf("%d, ", a3[l]);
    }

    return 0;
}