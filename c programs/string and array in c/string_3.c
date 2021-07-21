//gets function in c 
#include <stdio.h>

int main(){
    char str1[100];
    printf("Enter a sentence: ");
    gets(str1);
    printf("%s", str1);

    return 0;
}