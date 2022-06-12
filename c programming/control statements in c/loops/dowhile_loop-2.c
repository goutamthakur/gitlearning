#include <stdio.h>
int main()
{
	int j;
	printf("Enter the a number between 1 to 10: ");
	scanf("%d", &j);
	do
	{
		printf("Value of variable j is: %d\n", j);
		j++;
	} while (j <= 10);
	return 0;
}