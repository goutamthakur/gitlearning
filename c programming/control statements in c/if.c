//Program to find the greatest of three number. Only using if.
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter any three number:-\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is largest", a);
    }
    if (b > a && b > c)
    {
        printf("%d is largest", b);
    }
    if (c > a && c > b)
    {
        printf("%d is largest", c);
    }
    if (a == b && b == c)
    {
        printf("All numbers are equal.");
    }

    return 0;
}