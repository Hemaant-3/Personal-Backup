#include<stdio.h>
int main()
{
int size, pos, a[50], choice;
printf("enter the size of an array\n");
scanf("%d", &size);
printf("enter the elements in an array\n");
for (int i = 0; i < size; i++)
{
    scanf("%d", &a[i]);
}
printf("enter the 1 for delete at specfic position \nand 0 for at first position\n");
scanf("%d", &choice);
if(choice==1){
printf("enter the position of element to delete: ");
scanf("%d", &pos);
if (pos<=0 || pos>size)
{
    printf("invalid position");
goto end;
}else
/*
deleting of an element at specific position
*/
{
    for(int i= pos-1;i<size-1;i++){
        a[i] = a[i+1];
    }
    size--;
}
} else
{
    for (int i = 0; i < size-1; i++)
    {
        a[i] = a[i+1];
    }
    size--;
    
}

for (int i = 0; i < size; i++)
{
    printf("%d, ", a[i]);
}

end: printf("\nwe don't do that here");
return 0;
}