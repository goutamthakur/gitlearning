//This programs shows what is address in memory and what is stored in that memory.
//It also shows the use of unary operator(&) to get the address.
#include <stdio.h>

int main()
{
    int val = 10;
    printf("Value: %d \n", val);
    printf("Address: %u \n", &val);

    return 0;
}