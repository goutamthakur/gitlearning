#include <stdio.h>

int main()
{
    int a[] = {3, 5, 19, 23, 1};
    printf("Array before sorting is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n\nSorted array is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}