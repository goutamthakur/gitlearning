//Sorting of array using bubble sort method
#include <stdio.h>

int main()
{
    int a[10] = {2, 33, 9992, 34, 23, 4, 1, 3, 36, 9};
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array is:-\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}