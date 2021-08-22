//Nested switch statements
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the value of x and y:\n");
    scanf("%d%d", &x, &y);
    switch (x)
    {
    case 10:
        printf("The value of x is %d\n", x);
        break;
    case 20:
        printf("The value of x is %d\n", x);
        switch (y)
        {
        case 10:
            printf("The value of y is %d\n", y);
            break;
        case 20:
            printf("The value of y is %d\n", y);
            break;
        default:
            printf("The value of y is neither equal to 10 not equal to 20\n");
            break;
        }
        break;
    default:
        printf("Value of x is not equal to 10 or 20\n");
    }

    return 0;
}