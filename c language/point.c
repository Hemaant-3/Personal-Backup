int main()
{
int a[] = {12,32,56,23,64,75,90};
int *q = a;

for(int i = 0; i<7;i++){
printf("%d\n",a+i); /* q+i, */
}
for (int i = 0; i < 5; i++)
{
    printf("%d,", i[q]); /* *(a+i), *(q+i), i[a], i[q] */
}

printf("%d", a); /* Base address of an array*/

return 0;
}