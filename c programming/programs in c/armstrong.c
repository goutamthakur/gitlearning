//To find the given number is armstrong or not.
#include <stdio.h>

int main()
{
    int num, r, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        sum = sum + (r * r * r);
        num = num / 10;
    }
    if (temp == sum)
    {
        printf("Entered number is an armstrong");
    }
    else
    {
        printf("Entered number is not an armstrong");
    }

    return 0;
}