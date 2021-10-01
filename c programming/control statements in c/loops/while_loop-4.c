#include <stdio.h>

int main()
{
    int rows, columns;
    printf("Enter the numbers of rows: ");
    scanf("%d", &rows);
    printf("Enter the numbers of columns: ");
    scanf("%d", &columns);
    int i = 1;
    while (i <= rows)
    {
        int j = 1;
        while (j <= columns)
        {
            printf("*\t");
            j++;
        }
        i++;
        printf("\n");
    }

    return 0;
}