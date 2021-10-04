//Pointer to function
#include <stdio.h>
int addition();
int main()
{
    int result;
    int (*ptr)();
    ptr = &addition;   //ptr is pointer which stores the address of function
    result = (*ptr)(); //ptr is pointing to addition we
                       //can get return value from function
    printf("The sum is %d", result);

    return 0;
}

int addition()
{
    int a, b;
    printf("Enter two number: \n");
    scanf("%d %d", &a, &b);

    return a + b;
}