//Returning pointer pointing to an array
//Segmentation fault
#include <stdio.h>
int *getarr()
{
    int arr[5];
    printf("Enter the elements of an arry: ");
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}
int main()
{
    int *n;
    n = getarr();
    printf("\nThe elements of an array are:-\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}