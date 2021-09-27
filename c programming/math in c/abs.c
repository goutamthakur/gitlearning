/* 
abs function in c returns the absolute value of given number
only in this function we need to use %d format specifier
since the function returns an integer
*/

#include <stdio.h>
#include <math.h>

int main()
{
    printf("%d\n", abs(-15));

    printf("%d\n", abs(35.3));
    printf("%d\n", abs(45.5));
    printf("%d\n", abs(55.9));

    printf("%d\n", abs(0));

    return 0;
}