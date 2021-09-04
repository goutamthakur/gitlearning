//Sorting an array using bubble sort method.
#include <stdio.h>

void Bubble_Sort(int arr[]);

int main()
{
    int arr[10];
    printf("Enter an array of ten numbers:-\n");
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &arr[i]);
    }
    Bubble_Sort(arr);

    return 0;
}

void Bubble_Sort(int arr[])
{
    int temp;
    for (int i = 0; i < 10; ++i)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n\nSorted array is :-\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d\n", arr[i]);
    }
}
