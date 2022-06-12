#include <stdio.h>

int main()
{
    int n, c = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2) /*Since i starts from 1, and prime number is divible by both one and itself.
                So for a prime number c will be increment by 2 */
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}