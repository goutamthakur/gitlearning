//Pointer pointing to a static variable
#include <stdio.h>

int *func();

int main()
{
    int *ptr = func();
    printf("%d", *ptr); //This will print the value of x variable
    return 0;
}

int *func()
{
    static int x = 56; //Since the static variables is stored in
                       //global so in can be accessed anywhere in the program
    return &x;
}