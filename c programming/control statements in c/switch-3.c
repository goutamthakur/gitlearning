#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the value of x and y:\n");
    scanf("%d%d",&x,&y);

    switch (x+y)
    {
    case 10:
        printf("x+y=10");
        break;
    case 20:
        printf("x+y=20");
        break;
    default:
        printf("x+y is neither equal to 10 nor equal to 20");
    }

    return 0;
}