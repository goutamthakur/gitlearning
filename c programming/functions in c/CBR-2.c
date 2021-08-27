//Call By Reference
#include <stdio.h>
void swap(int *num1, int *num2)
{
    printf("Before swapping the number in function *num1 = %d and *num2 = %d\n", *num1, *num2);
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("After swapping the number in function *num1 = %d and *num2 = %d\n", *num1, *num2);
}

int main()
{
    int a = 10, b = 20;
    printf("Before swapping the value of a = %d and b = %d \n", a, b);
    swap(&a, &b);
    printf("After swapping the value of a = %d and b = %d \n", a, b);

    return 0;
}
