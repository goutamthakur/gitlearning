// strcpy() function in c
#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "Hello world", b[100];
    strcpy(b, a);

    //This function copy a string into the another string.
    //Here the string in which you want copy the other string will come first and then other string.

    printf("The string after copying from the other string is \n  %s", b);

    return 0;
}