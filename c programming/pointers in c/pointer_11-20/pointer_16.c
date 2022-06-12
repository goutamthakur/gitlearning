//Pointer Subtraction
#include <stdio.h>

int main()
{
    int num = 39;
    int *p;
    p = &num;
    printf("Address of p variable is %u \n", p);
    p = p - 3;
    printf("After adding 3: Address of p variable is %u\n", p);

    return 0;
}