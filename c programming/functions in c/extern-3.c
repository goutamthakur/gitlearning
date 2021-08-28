#include <stdio.h>

int main()
{
    // extern int y = 10;//shows an error since we cannot extern and intializer at the same time
    extern int y;
    printf("%d", y);

    return 0;
}
int y = 10;