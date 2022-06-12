#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissor(char you, char comp)
{
    // Condition for draw
    if (you == comp)
    {
        return 0;
    }
    //Non-draw conditions
    // rp
    // ps
    // sr
    if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (you == 'r' && comp == 'p')
    {
        return -1;
    }

    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }

    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1; //Generates a random number between 1 and 100
    if (number < 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }

    printf("Enter 'r' for rock, 'p' for paper, and 's' for scissor   \n");
    scanf("%c", &you);

    int result = rockpaperscissor(you, comp);
    printf("You chose %c and computer chose %c \n", you, comp);

    if (result == 1)
    {
        printf("You win :)\n");
    }
    else if (result == -1)
    {
        printf("You lose :(\n");
    }

    else if (result == 0)
    {
        printf("Game draw... \n");
    }

    return 0;
}