#include <stdio.h>
int main()
{
    int P, C, M;
    printf("Enter the marks of P, C, M\n\n");
    /*
P - physics, M - maths, C- Chemistry
    */
    scanf("%d%d%d", &P, &C, &M);
    int sum = P + M;
    int Sum = P + C + M;
    if (P > 40)
    {
        if (C > 50)
        {
            if (M > 60)
            {
                if (sum >= 150 || 150 < Sum <= 300)
                {
                    printf("you are elegibele");
                }
                else
                {
                    printf("Not elegible");
                }
            }
            else
            {
                printf("Not elegible");
            }
        }
        else
        {
            printf("Not elegible");
        }
    }

    return 0;
}