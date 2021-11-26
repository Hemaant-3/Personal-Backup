#include<stdio.h>
int main()
{
int k =0;

for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
        k++;
    }
}
printf("%d", k);
return 0;
}