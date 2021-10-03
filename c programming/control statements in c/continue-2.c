#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d %d\n", i, j);
            if (i == 2 && j == 2)
            {
                continue; //This will give the control to the beginning of the loop

                i = 10, j = 20; /*This line is skipped as the control is at the beginnig of the loop
                            Hence continue is also used to skip some code */
            }
        }
    }

    return 0;
}