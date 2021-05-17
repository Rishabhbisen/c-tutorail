#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaterrandamnomber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greter(char1, char2)
{

    if (char1 == char2)
    {
        return -1;
    }

    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }

    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }

    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }

    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }

    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int playerscore = 0, comscore = 0, temp;
    char playerchar, comchar;
    char dict[] = {'r', 'p', 's'};

    printf(" welcome to the Rock ,Paper , scissore.\n");
    for (int i = 0; i < 3; i++)
    {
        printf("player 1 : turn\n");
        printf(" chose 1 for Rock , 2 for Paper , 3 for scissor\n ");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf(" you chose %c\n", playerchar);

        printf("computer turn\n");
        printf(" chose 1 for Rock , 2 for Paper , 3 for scissor\n ");
        temp = generaterrandamnomber(3) + 1;
        comchar = dict[temp - 1];
        printf(" computer chose %c\n", comchar);

        if (greter(comchar, playerchar) == 1)
        {
            comscore += 1;
            printf("cpu got it\n");
        }

        else if (greter(comchar, playerchar) == -1)
        {
            comscore += 1;
            playerscore += 1;
            printf("its draw\n");
        }
        
        else
        {
            playerscore += 1;
            printf("you got it\n");
        }

        if (playerscore > comscore)
        {
            printf("you win game\n");
        }
        else if (playerscore < comscore)
        {
            printf("cpu win game\n");
        }
        else
        {
            printf(" draw match\n");
        }
    }

    return 0;
}
