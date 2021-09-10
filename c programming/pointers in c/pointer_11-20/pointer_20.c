#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    int a = 840;
    ptr = &a;
    free(ptr);
    printf("Program runs...");

    return 0;
}