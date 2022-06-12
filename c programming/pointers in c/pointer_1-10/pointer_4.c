//Call by reference
#include <stdio.h>
int swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;

    return 0;
}
int main()
{
    int a = 5, b = 7;
    printf("Value before call a=%d and b=%d \n", a, b);
    swap(&a, &b);
    printf("Value after call a=%d and b=%d \n", a, b);

    return 0;
}