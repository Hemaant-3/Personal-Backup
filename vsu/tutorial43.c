#include<stdio.h>

#include<string.h>

void parser(char *string)
{
int in = 0;
int index = 0;
for (int i = 0; i < strlen(string); i++)
{
    if(string[i] == '<'){
    in =1;
    continue;
}
        else if(string[i] == '>')
        {
in= 0;
continue;
}
if(in==0)
{
    string[index] = string[i];
    index++;
}
}
    string[index] = '\0';
//remove the trailing spaces from begning

while(string[0] == ' '){
    for (int i = 0; i < strlen(string); i++)
    {
        // shifting left 
        string[i] = string[i+1];
    }
    //removing spaces from end
   
        while(string[strlen(string)-1] == ' '){
            string[strlen(string)-1]= '\0';

        }
    
    
}
}






