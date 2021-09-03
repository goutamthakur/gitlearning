//Returning an array using malloc() function.
#include <stdio.h>
#include <malloc.h>

int *getarr()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int *p = malloc(sizeof(size));
    printf("\nEnter the elements in an array:-\n");
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &p[i]);
    }
    return p;
}

int main()
{
    int *ptr;
    ptr = getarr();
    int length = sizeof(*ptr);
    printf("Elements that you have entered are: ");
    for (int i = 0; ptr[i] != '\0'; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}