//Multiply a number using call by refrence
#include <stdio.h>
void tentimes(int *a)
{
    printf("\nValue of a: %d\n", a);
    printf("Address of a: %d\n", &a);
    printf("Value of *a: %d\n", *a);
    *a = *a * 10;
}
int main()
{
    int i;
    printf("Enter number(i): ");
    scanf("%d", &i);
    printf("Address of i: %u\n", &i);
    tentimes(&i);
    printf("\nValue of i after passing to function: %d\n", i);

    return 0;
}