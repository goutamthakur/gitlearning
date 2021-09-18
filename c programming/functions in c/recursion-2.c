//nth term Fibonacci series
//In fibonacci series zero is not consider as a first term.
#include <stdio.h>
int fibo(int);
int main()
{
    int n;
    printf("Enter the nth term of fibonacci series:\n");
    scanf("%d", &n);
    long long int result = fibo(n);
    printf("The value of %dth of the fibonacci series is: %lld", n, result);
    return 0;
}

int fibo(int n)
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
        return fibo(n - 1) + fibo(n - 2);
    }
}