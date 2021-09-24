#include <stdio.h>

int getSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{

    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    printf("Sum of digits of given number is:\n %d", getSum(a));

    return 0;
}
