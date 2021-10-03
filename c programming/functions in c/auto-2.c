//Storage class: auto
#include <stdio.h>

int main()
{
    int a = 10;
    printf("%d ", a);
    {               //block starts
        int a = 20; //a = 20 has scope only in this block of code
        for (int i = 0; i < 2; i++)
        {
            printf("%d ", a);
        }
    } //block ends
    printf("%d ", a++);
    printf("%d ", a);

    return 0;
}