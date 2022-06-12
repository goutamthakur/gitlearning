#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number between 1 to 10\n");
    scanf("%d", &n);
    if (n <= 10)
    {
        printf("Entered number is : %d \n", n);
        printf("Your number is within the range :)");
    }
    else
    {
        printf("You entered number out of range!!!");
    }

    return 0;
}