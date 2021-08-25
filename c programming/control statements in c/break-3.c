#include <stdio.h>

int main()
{
    int i = 1;
    while (1)//This is will make loop the to run for infinite.
    {
        printf("%d ", i);
        i++;
        if (i == 10)
        {
            break;//since due to break this infinite loop will stop when i is equal to 10
        }
    }
    printf("control came out of the loop when i = %d", i);

    return 0;
}