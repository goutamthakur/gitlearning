//Imprecision
#include <stdio.h>

int main()
{
    float x = 1, y = 10;
    printf("%.50f\n", x / y);//even though 1/10 is 0.1 this will give some extra number in between

    return 0;
}