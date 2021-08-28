//Finding largest and the second largest element of an array
#include <stdio.h>

int main()
{
    int a[5] = {12, 3, 75, 35, 53};
    int sec_largest, largest;
    largest = a[0];
    sec_largest = a[1];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > largest)
        {
            sec_largest = largest;
            largest = a[i];
        }
        else if (a[i] > sec_largest && a[i] != largest)
        {
            sec_largest = a[i];
        }
    }
    printf("Largest number: %d \nSecond largest number: %d", largest, sec_largest);

    return 0;
}