#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter number whose table you want?\n");
    scanf("%d", &n);
table:
    printf("%d x %d = %d\n", n, i, n * i);
    i++;
    if (i <= 10)    //if these condition is true goto is executed.
        goto table; //this takes control of the program to table: i.e line number 8

    return 0;
}