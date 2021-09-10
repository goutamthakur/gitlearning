//Pointer becomes dangling when function is called
#include <stdio.h>

int *func();

int main(){
    int *ptr =func();
    printf("%d", *ptr);/* This will not  print any think as a 
                       result *ptr becomes a dangling pointer */
    return 0;
}

int *func(){
    int x =56;
    return &x;//here the we are returning the address of local variable
}