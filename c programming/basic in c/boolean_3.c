//typedef is another way of using boolean value
#include <stdio.h>
typedef enum
{
    false,
    true
} b;
int main()
{
    b x = false;
    b y = true;
    if (x == true)
    {
        printf("The value of x is true\n");
    }
    else
    {
        printf("The value of x is false\n");
    }
    if (y== true)
    {
        printf("The value of y is true\n");
    }
    else
    {
        printf("The value of y is false\n");
    }

    return 0;
}