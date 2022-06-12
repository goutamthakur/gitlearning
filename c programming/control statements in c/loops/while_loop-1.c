#include <stdio.h>
int main()
{
    int i, n;
    i = 1;
    printf("Enter a number a less than or equal to 20: ");
    scanf("%d", &n);
    if (n > 20)
    {
        printf("\n");
        printf("Entered number is out of range!!!\n");
        printf("\n");
    }
    else
    {
        while (i <= n)
        {
            printf("%d\n", i);
            i++;
        }
    }

    return 0;
}