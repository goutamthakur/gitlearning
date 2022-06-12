//passing an array to a function as an pointer
#include <stdio.h>
void func(char *ptr)
{
    printf("Elements of an array are: ");
    for (int i = 0; i < 5; ++i)
    {
        printf("%c ", ptr[i]);
    }
}

int main()
{
    char arr[5] = {'d', 'f', 'O', 'z', 'Q'};
    func(arr);

    return 0;
}