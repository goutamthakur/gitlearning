//Passing an array to function to find smallest number
#include <stdio.h>

int minarray(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; ++i)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int min = 0;
    int numbers[] = {4, 5, 7, 3, 8, 9, 10, 23, 34, 23,1};
    min = minarray(numbers, 11);
    printf("Minimum number is %d\n", min);

    return 0;
}