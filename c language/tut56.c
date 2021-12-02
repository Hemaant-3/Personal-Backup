#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int greater(char1, char2)
{
if (char1 == char2){
    return -1;
}
if((char1 == 'r') (char2 == 's'))
{
return 1;
}
else
{
    return 0;
}
if ((char1 = 'p', (char2 = 'r'))
{
    return 1;
}


    return 0;
}
int generateRandomNo(int a)
{
    //input n end number to generate b\w 0 to n.
    srand(time(NULL));
    return rand() % a;
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};

    printf("Welcome to Rock, Paper, Scissor Game\n");
    printf("Choose 1 for Rock, 2 Paper and 3 for Scossors\n");
    for (int i = 0; i < 3; i++)
    {
        printf("player's Turn:\n");
        printf("Choose 1 for Rock, 2 for paper and 3 for Scissor\n");
        scanf("%d", &temp);
        playerChar = dict[temp - 1];

        printf("Computer's Turn:\n");
        printf("Choose 1 for Rock, 2 for paper and 3 for Scissor\n");
       temp = generateRandomNo(3)+1;
        playerChar = dict[temp - 1];

        if (greater(compChar, playerChar)==1)
        {
            compScore += 1;
        } else if (greater(compChar, playerChar)== -1)
        {
            compScore += 1;
            playerScore +=1;
        } else {

            playerScore += 1;
        }
        
        
    }

    // srand(time(NULL)); // generating random no. b\w 1 to 100.
    // printf("the random number is %d\n", rand()%100);
    printf("The random is %d\n", generateRandomNo(2));

    return 0;
}