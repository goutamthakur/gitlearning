#include <stdio.h>

int main()
{
    int rows, columns;
    printf("Enter the numbers of rows: ");
    scanf("%d", &rows);
    printf("Enter the numbers of columns: ");
    scanf("%d", &columns);
    int i = 1;
    do
    {
        int j = 1;
        do
        {
            printf("*");
            j++;
        } while (j <= columns);
        i++;
        printf("\n");
    } while (i <= rows);

    return 0;
}