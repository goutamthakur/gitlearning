#include <stdio.h>

int main()
{
    register int x = 0;
    printf("%u", &x); /* This will give compile time error 
                    since we can not access the address of a register variable */

    return 0;
}