//strcat() in c
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Very ", str2[] = "Good";
    printf("%s \n", str1);
    printf("%s \n", str2);
    strcat(str1 , str2);
    printf("Concatenated sting is %s  \n", str1);

    

    return 0;
}