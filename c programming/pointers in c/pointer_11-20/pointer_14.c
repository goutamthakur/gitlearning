//Decrementing pointer
#include <stdio.h>

int main()
{
    int num = 24;
    int *ptr;
    ptr = &num;
    printf("Address of ptr variable is %u\n", ptr);
    ptr = ptr - 1;
    printf("After decrement: Address of ptr variable is %u\n", ptr);
    return 0;
}