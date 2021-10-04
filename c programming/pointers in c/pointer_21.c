//Dangling pointer
#include <stdio.h>

int main()
{
    char *ptr;

    {
        char a = 'a';
        ptr = &a;
    }

    //Here ptr is a dangling pointer because char a
    //has limited to scope
    printf("%s", *ptr);

    return 0;
}