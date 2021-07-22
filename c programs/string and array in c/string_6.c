// strcpy() function in c
#include <stdio.h>
#include <string.h>

int main(){
    char a[] ="Hello world", b[100];
    strcpy(b,a);
    printf("%s", b);
    return 0;
}