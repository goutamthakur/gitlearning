// Call By Value
#include <stdio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping the number in function a = %d and b = %d\n", a, b);
}
int main()
{
    int a = 10, b = 20;
    printf("Before swapping the value of a = %d and b = %d \n", a, b);
    swap(a, b);
    printf("After calling the function the value of a = %d and b = %d \n", a, b);

    return 0;
}
