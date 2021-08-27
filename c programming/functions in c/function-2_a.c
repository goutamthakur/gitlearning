// Function without argument and with return value
#include <stdio.h>
int sum();

int main()
{
    int result;
    printf("Going to calculate addition of two numbers:\n");
    result = sum();
    printf("Addition of given two numbers is %d", result);

    return 0;
}

int sum()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    return a + b;
}
