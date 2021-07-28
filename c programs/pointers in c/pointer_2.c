//Basic program using pointers
#include <stdio.h>

int main(){
    int *p, v=20;
    p=&v;
    printf("Value of v is: %d\n", v);
    printf("Address of v is: %d\n", &v);

    printf("Value of *p is: %d\n", *p);
    printf("Value of p is: %d\n", p);
    printf("Address of p is: %d\n", &p);

    return 0;
}