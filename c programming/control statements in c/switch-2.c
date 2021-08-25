//switch case statements without break
//If any one case is true all the remaining cases code will get executed.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    switch (num)
    {
    case 2:
        printf("Entered number is equal to 2\n");

    case 3:
        printf("Entered number is equal to 3\n");

    case 5:
        printf("Entered number is equal to 5\n");

    default:
        printf("Entered number is not equal to 2, 3, 5\n");
    }

    return 0;
}