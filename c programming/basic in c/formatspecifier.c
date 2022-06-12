#include <stdio.h>

int main()
{
    int a = 10;
    float c = 9.18;
    char d = 'h';

    printf("%d\n", a);
    printf("%5d\n",a);
    printf("%05d\n",a);

    printf("%f\n", c);
    printf("%.4f\n",c);
    printf("%g\n", c);

    printf("%c\n", d);
    printf("%s\n", "Hey!!");

    printf("%e\n", c);
    printf("%E\n",c);

    return 0;
}