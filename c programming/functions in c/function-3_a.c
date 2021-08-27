//Function with argument and without return value
#include <stdio.h>
void sum(int, int);
int main()
{
    int a, b;
    printf("We are going to do addition of two numbers...\n\n");
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}

void sum(int a, int b)
{
    printf("Addtion of given two number is %d", a + b);
}