#include <stdio.h>

int main()
{
    extern int z;
    printf("%d", z);//error variable z is not declared globally 

    return 0;
}