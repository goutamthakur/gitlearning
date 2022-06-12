#include <stdio.h>

int main()
{
    float a, p, r, t, c1, si;
    printf("Enter Principal Amount: ");
    scanf("%f", &p);
    printf("Enter Annual Interest Rate: ");
    scanf("%f", &r);
    printf("Enter Time(in years): ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    r = r / 100;
    c1 = 1 + r * t;
    a = p * c1;
    printf("\nTotal Amount: %.2f\n", a);
    printf("Simple Interest: %.2f\n", si);

    return 0;
}