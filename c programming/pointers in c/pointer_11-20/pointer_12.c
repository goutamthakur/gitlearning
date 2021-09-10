//Increment of pointer
//Pointer pointing to the variable address is increment by one.
#include <stdio.h>

int main()
{
    int num = 29;
    int *ptr;
    ptr = &num;
    printf("Address of num variable is %u\n", &num);
    printf("Value of ptr variable is %u\n", ptr);
    printf("Address of ptr variable is %u\n", &ptr);

    ptr = ptr + 1;

    printf("\nValue of ptr variable after increment is %u\n", ptr);
    printf("Address of num variable is %u\n", ptr);
    printf("Address of ptr is %u\n", &ptr);

    return 0;
}