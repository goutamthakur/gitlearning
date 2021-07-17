#include <stdio.h>

int main(){
    char *ptr="SJCEM";
    printf("%dn", *&*&*ptr);

    return 0;
}