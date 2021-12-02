#include<stdio.h>
/*
Hemant Kumar Chaudhary, E2, Roll.- 12
*/
int main()
{
float basic_sal,da, hra, pf, gross_sal, net_sal;

printf("\n Enter basic saalary of the empoly: Rs. \n");
scanf("%f", &basic_sal);

da= (basic_sal * 25)/100;
hra = (basic_sal * 10)/100;

gross_sal =  basic_sal + da + hra;
pf = (gross_sal * 10)/100;
net_sal = gross_sal - pf;

printf("\n\n Net salary: Rs. %2.f", net_sal);
    return 0;
}