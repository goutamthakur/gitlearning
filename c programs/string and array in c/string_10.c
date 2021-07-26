//Another example of strchr() function in c
#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "programming";
    char ch = 'g';
    printf("String is : %s ", strchr(str, ch));
    return 0;
}