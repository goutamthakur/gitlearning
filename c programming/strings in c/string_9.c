//strchr() function in c
#include <stdio.h>
#include <string.h>

int main()
{
    const char str[] = "This is just a String";
    const char ch = 'u';
    char *p;
    p = strchr(str, ch);
    //Returns a pointer from the first occurrence of character ch in the string str

    printf("String starting from %c is: %s ", ch, str);

    return 0;
}