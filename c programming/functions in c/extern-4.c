extern int y;
int y = 10;

#include <stdio.h>
int main()
{
    printf("%d", y);

    return 0;
}
//  int y =20;  //An external variable can be
//declared many times but can be initialized at only once.
//Hence error will be give by compiler.