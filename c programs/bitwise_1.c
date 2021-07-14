// Differnece between bitwise operator and logical operator 
#include <stdio.h>

int main()
{
    char x = 1, y = 1;
    if (x & y)
    {
        printf("Result of x&y is 1\n");
    }
    if (x && y)
    {
        printf("Result of x&&y is 1\n");
    }
    return 0;
}