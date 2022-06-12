//Passing an array to a function
#include <stdio.h>
void getarr(int a[])
{
    printf("Elements of an array are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[5] = {1, 13, 27, 34, 49};
    getarr(a);

    return 0;
}