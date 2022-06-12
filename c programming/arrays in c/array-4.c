//2D array
#include <stdio.h>

int main()
{
    int arr[4][3] = {{1, 6, 9}, {12, 15, 18}, {23, 27, 22}, {39, 36, 33}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}