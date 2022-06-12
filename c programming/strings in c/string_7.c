// strcmp() function in  c
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    printf("Enter the first sentence:\n");
    gets(a);
    printf("Enter the second sentence which you want to compare with first sentence:\n");
    gets(b);
    int n = strcmp(a, b);
    printf("Value after comparing is %d\n", n);
    if (n == 0)
    {
        printf("Both the entered sentence are same\n");
    }
    else
    {
        printf("Both the entered sentence are not same\n");
    }

    return 0;
}