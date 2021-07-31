#include <stdio.h>
#include <math.h>

int main()
{
    float a, p, r, n, ci, c1;
    printf("Enter Principal amount: ");
    scanf("%f", &p);
    printf("Enter Rate of interest: ");
    scanf("%f", &r);
    printf("Enter number of years: ");
    scanf("%f", &n);
    c1 = 1 + r / 100;
    a = p * pow(c1, n);
    ci = a - p;
    printf("Final amount: %.2f\n", a);
    printf("Compounded interest: %.2f\n", ci);

    return 0;
}