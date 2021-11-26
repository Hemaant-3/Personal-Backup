#include <stdio.h>
#include <math.h>
#include<string.h>
int main()
{
    float root1, root2, d, real_root, imag_root;
    int  a, b, c;
    printf("Enter the value a, b, c\n");
    scanf("%d%d%d\n", &a, &b, &c);
    // getchar();
    d = (b * b) - (4 * a * c);

    if (d > 0)
    {
        printf("Exist two real and distinct roots\n");
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("\n\nthe root1 %.2f and Root2 is %.2f\n", root1, root2);
    }
    else if (d == 0)
    {
        printf("Exist two rwal and equal roots\n");
        root1 = root2 = (-b) / (2 * a);
        printf("\n\nthe root is %2.f\n", root1);
    }
    else
    {
        printf("Exist imaginary roots\n");
        real_root = (-b) / (2 * a);
        imag_root = sqrt(-d) / (2 * a);
        printf("\\n\nthe real root is %.2f and imaginary is %2.f\n", real_root, imag_root);
    }

    return 0;
}