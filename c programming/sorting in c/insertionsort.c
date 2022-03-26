#include <stdio.h>

int main()
{
    int n, arr[100];
    printf("Enter the number of element: \n");
    scanf("%d", &n);
    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        int x = arr[i],j;
        for(j=i-1;j>=0 && x< arr[j]; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1] = x;
    }

    printf("Sorted array in ascending order: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}