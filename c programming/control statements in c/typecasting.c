#include <stdio.h>

int main()
{
    float i = 9 / 4;
    printf("The value of i is %f when type casting is not used.\n", i);

    float j = (float)9 / 4;
    printf("The value of j is %f when type casting is used.\n", j);

    return 0;
}
