//Storage class: static
#include <stdio.h>
void sum()
{
    // int a = 10;
    // int b = 34;
    static int a = 10;
    static int b=34; 
    printf("%d  %d \n", a, b);
    a++;
    b++;
}
void main()
{
    int i;
    for (i = 0; i < 4; i++)
    {
        sum(); // The static variables holds their value between multiple function calls
               //Default value is zero. Without static 10 and 34 is printed 4 times.
    }
}