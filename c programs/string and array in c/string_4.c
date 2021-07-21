// guts and puts in c 
#include <stdio.h>

int main(){
    char str[1000];
    printf("Enter your address:- \n");
    gets(str);
    printf("*** Your address is ***\n\n");
    puts(str);

    return 0;
}