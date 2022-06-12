//Program to calculate the grade of the student according to the specified marks
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("You have scored A+");
    }
    else if (marks >= 80 && marks <= 90)
    {
        printf("You have scored A");
    }
    else if (marks >= 70 && marks <= 80)
    {
        printf("You have scored B+");
    }
    else if (marks >= 60 && marks <= 70)
    {
        printf("You have scored B");
    }
    else if (marks >= 50 && marks <= 60)
    {
        printf("You have scored C");
    }
    else if (marks >= 40 && marks <= 50)
    {
        printf("You have scored D");
    }
    else if (marks >= 35 && marks <= 40)
    {
        printf("You have scored E");
    }
    else
    {
        printf("You have failed!");
    }

    return 0;
}