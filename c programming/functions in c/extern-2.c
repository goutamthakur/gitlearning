#include <stdio.h>
int z; //varible is defined globally
int main()
{
    extern int z;
    printf("%d", z); //default as zero

    return 0;
}