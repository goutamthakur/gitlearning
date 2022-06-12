//Storage class: static
#include <stdio.h>
static int i;
static float f;
static char c;
static char s[10];
void main()
{
    printf("%d %f %d %s", i, f, c, s[10]);
    // the initial default value of c, i, f and s[10] will be printed.
    // and the default value is zero
}