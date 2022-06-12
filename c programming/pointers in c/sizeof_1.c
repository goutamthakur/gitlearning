//Operand is data type
#include <stdio.h>

int main()
{
    int a = 89;

    printf("Size of a variable is %d\n", sizeof(a));
    printf("Size of int data type is %d\n", sizeof(int));
    printf("Size of float data type is %d\n", sizeof(float));
    printf("Size of char data type is %d\n", sizeof(char));
    printf("Size of short data type is %d\n", sizeof(short));
    printf("Size of long data type is %d\n", sizeof(long));
    printf("Size of long long data type is %d\n", sizeof(long long));
    printf("Size of double data type is %d\n", sizeof(double));

    return 0;
}
