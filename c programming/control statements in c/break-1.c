#include <stdio.h>

int main()
{
    int i = 1;
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
        if (i == 5)
        {
            break;
        }
    }
    printf("control came out of loop when i = %d", i);

    return 0;
}