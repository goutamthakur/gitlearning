#include <stdio.h>

int main(){
    char str[1000];
    char *ptr;
    printf("Enter a sentence: ");
    gets(str);
    ptr=str;
    printf("\nEntered sentence is: ");
    while (*ptr!='\0')
    {
        printf("%c", *ptr++);
        //*ptr means the content of variable to which ptr is been pointed.
    }
        
    return 0;
}