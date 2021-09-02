#include <stdio.h>
int *getarr(int *a)
{
    printf("Enter the element of array:-\n");
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &a[i]);
    }
    return a;
}

int main()
{
    int *n;
    int a[5];
    n = getarr(a);
    printf("\nEntered array is: ");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", n[i]);
    }
    return 0;
}