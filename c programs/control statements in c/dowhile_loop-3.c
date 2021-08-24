#include <stdio.h>

int main()
{
    int n, i = 1, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    do
    {
        printf("%d x %d = %d\n", n, i, temp);
        i++;
        temp=n;
        temp = temp * i;
    } while (i <= 10);

    return 0;
}