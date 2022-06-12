//strcat() in c
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Very ", str2[] = "Good";
    //Here in the first string there is a space in the last hence we can see space
    // in between the two sting in the output

    printf("%s \n", str1);
    printf("%s \n", str2);
    strcat(str1, str2);

    //This function joints the first string last character with the first character of the second string
    printf("Concatenated sting is %s  \n", str1);

    return 0;
}