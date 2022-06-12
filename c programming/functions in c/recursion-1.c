//Factorial of  given number
#include <stdio.h>
int fact(int);

int main()
{
    int n;
    printf("Enter the number whose factorial you want:\n");
    scanf("%d", &n);
    long long int result = fact(n);
    printf("Factorial of %d is %lld", n, result);

    return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}