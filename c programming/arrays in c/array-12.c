//Using Structure
#include <stdio.h>
#include <malloc.h>

struct arr
{
    int arr[8];
}; //In structures after the end braces there is semicolon

struct arr getarray()
{
    struct arr y;
    printf("Enter the elements in an array(upto 8): ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &y.arr[i]);
    }

    return y;
}

int main()
{
    struct arr x = getarray();
    printf("Elements that you have entered are: ");
    for (int i = 0; x.arr[i] != '\0'; ++i)
    {
        printf("%d ", x.arr[i]);
    }

    return 0;
}