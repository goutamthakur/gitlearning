// Differnece between bitwise operator and logical operator 
#include <stdio.h>

int main()
{
    int x = 1, y = 1;
    if (x & y)
    {
        printf("Result of x&y is %d\n", x&y);
    }
    if (x && y)
    {
        printf("Result of x&&y is %d\n", x&&y);
    }
    return 0;
}