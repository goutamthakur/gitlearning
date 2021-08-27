// Function without argument and with return value
#include <stdio.h>

int square();

int main()
{
    printf("We are going to calculate the area of square...\n\n");
    float area = square();
    printf("Area of square is: %f", area);

    return 0;
}

int square()
{
    float side;
    printf("Enter length of the side of sqaure:\n");
    scanf("%f", &side);
    return side * side;
}