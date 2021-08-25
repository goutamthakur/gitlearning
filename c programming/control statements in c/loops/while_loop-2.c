#include <stdio.h>

int main()
{
    int n, i = 1, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp = n;
    printf("*** Table of %d ***\n", n);
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, temp);
        i++;
        temp = n;
        temp = temp * i;
    }

    return 0;
}