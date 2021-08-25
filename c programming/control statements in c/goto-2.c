#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            for (k = 0; k <= 2; k++)
            {
                printf("%d %d %d\n", i, j, k);
                if (j == 2)
                {
                    goto exit; //here goto helps to come out of multiple loops
                }
            }
        }
    }
exit: //once control is over here, then below code is executed.
    printf("Came out of the loop :)");

    return 0;
}