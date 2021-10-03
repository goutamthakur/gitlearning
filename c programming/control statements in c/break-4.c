#include <stdio.h>

int main()
{
    int n = 1, i, choice;
    do
    {
        i = 1;
        while (i <= 10)
        {
            printf("%d x %d = %d\n", n, i, n * i);
            i++;
        }
        printf("Do you want to print the table of %d,", n + 1);
        printf(" if yes then enter any non-zero number.");
        scanf("%d", &choice); //As long choice is any non-zero number the loop will run.
        if (choice == 0)
        {
            break; //break helps to get out of this infinite loop.
        }
        n++;

    } while (1);

    return 0;
}