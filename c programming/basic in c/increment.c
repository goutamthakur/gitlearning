#include <stdio.h>

int main()
{
    int a = 10;
    int y;

    y=a++;
    printf("Value of y when a++ is %d\n", y);
    printf("Value of a is %d\n", a);

    // y = ++a;
    // printf("Value of y when ++a is %d\n", y);
    // printf("Value of a is %d\n", a);

    return 0;
}