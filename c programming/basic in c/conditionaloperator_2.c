#include <stdio.h>

int main()
{
    int a = 10, b;
 // b = (a == 10) ? (5) : (2); This wiil give the value of b is 5
    b = (a == 20) ? (5) : (2);

    printf("The value of b is %d", b);

    return 0;
}