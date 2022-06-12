//Program to find given number is even of odd
#include <stdio.h>

int main()
{
    long long int n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    if (n % 2 == 0)
    {
        printf("Entered number %lld is even", n);
    }
    else
    {
        printf("Entered number %lld is odd", n);
    }

    return 0;
}
