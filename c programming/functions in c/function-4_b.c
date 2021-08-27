// Function with arguments and with return value
#include <stdio.h>
int even_odd(int);
int main()
{
    int n, temp;
    printf("Enter any numbers:\n");
    scanf("%d", &n);
    temp = even_odd(n);
    if (temp == 1)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
    return 0;
}

int even_odd(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}