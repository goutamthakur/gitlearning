// String inbuilt function strlen() in c
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    printf("Enter a sentence to know its lenght: \n");
    gets(a);
    int n = strlen(a); //It gives the length of the string including the blank spaces between the words.
    printf("The length of string is %d\n", n);

    return 0;
}