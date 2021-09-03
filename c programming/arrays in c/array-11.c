//Using Static Variable
#include <stdio.h>
int *getarray()
{
    static int arr[7];
    printf("Enter the elements in an array:\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}
int main()
{
    int *ptr;
    ptr = getarray();
    printf("\nElements that you have entered are: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", ptr[i]);
    }
    return 0;
}