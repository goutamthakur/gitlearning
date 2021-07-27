// guts and puts in c
// string program 3 and 4 works the same put in program 4 we use puts function instead of printf
#include <stdio.h>

int main()
{
    char str[1000];
    printf("Enter your address:- \n");
    gets(str);
    printf("*** Your address is ***\n\n");
    puts(str);

    return 0;
}