//Function with argument and without return type
//Average of five numbers
#include <stdio.h>
void average(float, float, float, float, float);
int main()
{
    float a, b, c, d, e;
    printf("We are going to calculate the average of five numbers...\n\n");
    printf("Enter the five numbers:\n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    average(a, b, c, d, e);

    return 0;
}

void average(float a, float b, float c, float d, float e)
{
    float sum, average;
    sum = a + b + c + d + e;
    average = sum / 5;
    printf("Average of given five numbers is %.4f", average);
}