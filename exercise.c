/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/
#include <stdio.h>
struct driver 
{
    char Name[45];
    char dlNo[55];
    char route[55];
    int kms;
}

main()
{
    struct driver d1, d2, d3;
printf("please enter driver information of driver:1\n");
printf("please enter driver Name of driver:1\n");
scanf("%s", &d1.Name);
printf("please enter dlNo. of driver:1\n");
scanf("%s", &d1.dlNo);
printf("please enter route of driver:1\n");
scanf("%s", &d1.route);
printf("please enter kms of driver:1\n");
scanf("%d", d1.kms);

printf("please enter driver information of driver:2\n");
printf("please enter driver Name of driver:2\n");
scanf("%s", &d2.Name);
printf("please enter dlNo. of driver:2\n");
scanf("%s", &d2.dlNo);
printf("please enter route of driver:2\n");
scanf("%s", &d2.route);
printf("please enter kms of driver:2\n");
scanf("%d", d2.kms);

printf("please enter driver information of driver:3\n");
printf("please enter driver Name of driver:3\n");
scanf("%s", &d1.Name);
printf("please enter dlNo. of driver:3\n");
scanf("%s", &d1.dlNo);
printf("please enter route of driver:3\n");
scanf("%s", &d1.route);
printf("please enter kms of driver:3\n");
scanf("%d", &d1.kms);

printf("~~~printing driver information~~~~\n");
    printf("the name of driver 1 is:%s\n", d1.Name);
    printf("the dlNo. of driver 1 is:%s\n", d1.dlNo);
    printf("the route of driver 1 is%s\n", d1.route);
    printf("the kms of driver 1 is:%d\n\n", d1.kms);

     printf("the name of driver 2 is:%s\n", d2.Name);
    printf("the dlNo. of driver 2 is:%s\n", d2.dlNo);
    printf("the route of driver 2 is%s\n", d2.route);
    printf("the kms of driver 2 is:%d\n\n", d2.kms);

     printf("the name of driver 3 is:%s\n", d3.Name);
    printf("the dlNo. of driver 3 is:%s\n", d3.dlNo);
    printf("the route of driver 3 is%s\n", d3.route);
    printf("the kms of driver 3 is:%d\n", d3.kms);
}    