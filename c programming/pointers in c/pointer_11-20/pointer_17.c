//Subracting two pointer
#include <stdio.h>

int main()
{
    int a = 95, b = 57;
    int *p = &a;
    int *temp = &b;

    printf("a = %d\n", a);
    printf("&a = %d\n", &a);
    printf("b = %d\n", b);
    printf("&b = %d\n", &b);
    printf("*p = %d\n", *p);
    printf("*temp = %d\n", *temp);

    p = p + 10;
    /*  p in pointer which means it stores address 
    and since we are adding 10 into it. 
    The address stored in it get added by 10; 
*/
    temp = temp - 4;

    printf("Pointer Subraction: %d - %d = %d\n", p, temp, p - temp);

    return 0;
}
