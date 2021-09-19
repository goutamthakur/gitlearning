//strcmpi() function in c
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "THIS IS FIRST STRING";
    char str2[] = "this is first string";
    int n = strcmpi(str1, str2);
    printf("This is what strcmpi() returns after comparing both the strings: %d", n);
    //strcmpi() also works like strcmp() it also returns 0,1,-1.
    // But only difference is that strcmpi() ignores the cases.

    return 0;
}