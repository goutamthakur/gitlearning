// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include <stdio.h>

int main()
{
   int num[5]; //declaration of the array

   printf("Enter 5 integers:-\n");

   for (int i = 0; i < 5; ++i) // taking input and storing it in an array
   {
      scanf("%d", &num[i]);
   }

   printf("\nDisplaying integers:-\n");

   for (int i = 0; i < 5; ++i) // printing elements of an array
   {
      printf("%d\n", num[i]);
   }

   return 0;
}
