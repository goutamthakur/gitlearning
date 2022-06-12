#include <stdio.h>
#include <stdlib.h>
void main()
{
    int option, temp;
    char y;
    do
    {
        printf("\nTo print: Hello World, enter 1\n");
        printf("To print: Software Developer, enter 2\n");
        printf("To EXIT, enter 3\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nHello World\n\n");
            break;
        case 2:
            printf("\nSoftware Developer\n\n");
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\nNumber out of range!!\nPlease enter correct number.\nThank You\n\n");
        }
        printf("Do you to print more?(y/n)\n");
        scanf("%d", &temp);
        scanf("%c", &y);

    } while (y == 'y');
}
