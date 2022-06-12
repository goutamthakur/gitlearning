#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num)
    {
    case 2:
        printf("Entered number is equal to 2");
        break;
    case 3:
        printf("Entered number is equal to 3");
        break;
    case 5:
        printf("Entered number is equal to 5");
        break;
    default:
        printf("Entered number is not equal to 2, 3, 5");
    }

    return 0;
}