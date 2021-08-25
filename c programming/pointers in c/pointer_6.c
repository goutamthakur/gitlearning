// Pointer to a pointer
#include <stdio.h>

int main(){
    int v=20, *p, **s;
    p=&v;
    s=&p;

    printf("Value of v is: %d\n", v);
    printf("Address of v is: %d\n", &v);

    printf("\nValue of *p is: %d\n", *p);
    printf("Value of p is: %d\n", p);
    printf("Address of p is: %d\n", &p);

    printf("\nValue of **s is: %d\n", **s);
    printf("Value of s is: %d\n", s);
    printf("Address of s is: %d\n", &s);

    return 0;
}