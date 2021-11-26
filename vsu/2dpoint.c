int main()
{
    int a[3][3] = {1, 2, 3,
                   4, 5, 6,
                   7, 8, 9}; /*  3x3 2d array*/
    int *p;
    p = a;
    printf("%d\n", &a);
    printf("%d\n", *a, **a);
    printf("%d %d\n", a, **a);
    printf("%d %d\n", &a + 1, *(*a + 1));
    printf("%d %d\n", &p, *p);
    printf("%d %d\n", *p+1, &p+1);
    printf("%d %d\n", a + 1, **(a + 1)); /*it gives the 1st element of 2nd array*/
    printf("%d %d\n", *(a + 2), **(a + 2));
    printf("%d %d\n", &a[2]-1, *a[2]-1);
    printf("%d %d\n", &a[1]+1, *a[1]+1); /*5*/
    printf("%d %d\n", *(a+1)+1, **(a+1)+1) ; /*5*/
    

    return 0;
}