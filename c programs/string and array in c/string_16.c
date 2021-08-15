//To print the ASCII value of the string and sum of the ASCII value of string
#include <stdio.h>

int main(){
    int sum =0, i=0;
    char str[100];
    printf("Enter your name: ");
    scanf("%s", str);
    while (str[i]!='\0')
    {
        printf("ASCII value of %c is %d\n", str[i], str[i]);
        sum =sum +str[i];
        i++;
    }
    printf("Sum of the ASCII value of given name is %d", sum);
    
    return 0;
}