#include <stdio.h>
float sum_and_avg(float i, float j, float *sum, float *avg)
{
    *sum = i + j;
    *avg = *sum / 2;

    return 0;
}

int main()
{
    float i, j, sum, avg;

    printf("Enter the first number: ");
    scanf("%f", &i);
    printf("Enter the second number: ");
    scanf("%f", &j);

    sum_and_avg(i, j, &sum, &avg);

    printf("\nSum of two number is: %.2f\n", sum);
    printf("Average of two number is: %.2f\n", avg);

    return 0;
}