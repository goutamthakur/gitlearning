//Function without argument and return value
#include <stdio.h>
void sum();

void main()
{
    printf("Going to add to number.\n");
    sum();
}

void sum()
{
    int a, b;
    printf("\nEnter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("Addtion of two number are %d", a + b);
}