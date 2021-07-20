// Print numbers from n to 10
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number between 1 to 10\n");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("Entered number is 1 \n");
    }
    else if (n > 10)
    {
        printf("ERROR!!!\nYou entered a number out of range\n");
    }

    else
    {
        printf("All number between %d and 10 is: ", n);
        for (int i = n; i <= 10; ++i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
