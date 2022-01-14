//strupr() function in c
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1000];
    printf("Enter a sentence having lowercase letter: \n");
    gets(str1);
    printf("The changed sring with all in uppercase is: \n%s ", strupr(str1));

    //strupr() function changes the whole string

    printf("%s \n", str1);

    return 0;
}
