//Factorial of a number using call by reference
#include <stdio.h>
int cal_fac(int *n)
{
    int f = 1; //If we don't assign one it will take zero as default.
    for (int i = 1; i <= *n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n, f = 1;
    printf("Enter a number to find factorial\n");
    scanf("%d", &n);
    f = cal_fac(&n);
    printf("Factorial of %d = %d\n", n, f);
}