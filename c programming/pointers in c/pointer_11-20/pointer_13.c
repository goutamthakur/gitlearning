//Traversing an by using pointer
#include <stdio.h>

int main()
{
    int array[5] = {2, 5, 13, 29, 37};
    int *ptr = array;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}