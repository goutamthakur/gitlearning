// Print numbers from n to 10
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number between 1 to 10: \n");
    scanf("%d", &n);

    if (n <= 10 && n > 0)
    {
        printf("All number between %d and 10 is: ", n);
        for (int i = n; i <= 10; ++i)
        {
            printf("%d ", i);
        }
    }
    else
    {
        printf("INVAID.\nNumber is out of range!!");
    }

    return 0;
}
