//Program to check whether the given year is leap year or not
#include <stdio.h>

void main()
{
    int year;

    printf("Enter a year:");
    scanf("%d", &year);

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        printf("Leap Year");
    else
        printf("Not a leap year");
}
