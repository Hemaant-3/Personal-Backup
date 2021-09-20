#include <stdio.h>
#include <string.h>
/* complete Project  of Calculator using C Languge*/
int main()
{
    while (1)
    {
        char operation;
        float a, b, result;
        printf("Enter q for quitting or \n Enter the operation for +, -, /, *.\n");
        scanf("%c", &operation);

        switch (operation)
        {
        case 'q':
            printf("quitting....");
            goto end;
            break;
        case '+':
            printf("Enter The Number 1\n");
            scanf("%f", &a);
            printf("Enter the Second Number\n");
            scanf("%f", &b);
            getchar();
            result = a + b;
            printf("your answer is : %0.2f\n", result);
            break;
        case '-':
            printf("Enter The Number 1\n");
            scanf("%f", &a);
            printf("Enter the Second Number\n");
            scanf("%f", &b);
            getchar();
            result = a - b;
            printf("your answer is : %0.2f\n", result);
            break;
        case '*':
            printf("Enter The Number 1\n");
            scanf("%f", &a);
            printf("Enter the Second Number\n");
            scanf("%f", &b);
            getchar();
            result = a * b;
            printf("your answer is : %0.2f\n", result);
            break;
        case '/':
            printf("Enter The Number 1\n");
            scanf("%f", &a);
            printf("Enter the Second Number\n");
            scanf("%f", &b);
            getchar();
            result = a / b;
            printf("your answer is : %0.2f\n", result);
        default:
            printf("invalid operation, please try again\n\n");
            goto end;
            // break;
        }
    }
end:

    return 0;
}