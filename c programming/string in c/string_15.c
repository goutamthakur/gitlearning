//strrev() function in c
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    printf("Enter a string: ");
    gets(str1);
    printf("The reverse of entered string is:%s", strrev(str1));
    //strrev give you a reverse of your sting    
    return 0;
}