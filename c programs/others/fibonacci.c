#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, n, fibo;
    printf("Enter the till you want the fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series: %d %d ", n1, n2);
    for (int i = 2; i < n ; i++)
    {
        fibo = n1 + n2;
        printf("%d ", fibo);
        n1 = n2;
        n2 = fibo;
    }

    return 0;
}