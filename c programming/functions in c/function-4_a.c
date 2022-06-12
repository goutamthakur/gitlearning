// Function with arguments and with return value
#include <stdio.h>
int sum(int, int);
int main()
{
    int a, b;
    printf("Enter the two numbers:\n");
    scanf("%d %d", &a, &b);
    int c = sum(a, b);
    printf("Sum of two numbers is %d", c);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}