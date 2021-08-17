//strlwr() function in c
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1000];
    printf("Enter a sentence having uppercase letter: ");
    gets(str1);
    printf("%s \n", strlwr(str1));//strlwr() function change the string 
    printf("%s \n",str1);

    return 0;
}
