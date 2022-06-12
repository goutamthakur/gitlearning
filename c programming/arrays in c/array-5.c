//Taking matrix from the user and print it
#include <stdio.h>

int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter [%d][%d] element of matrix: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEntered matrix is:-\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}