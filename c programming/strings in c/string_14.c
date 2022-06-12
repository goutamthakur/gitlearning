//strrchr() function in c
#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100] = "This is a string for i myself";
  char *p;
  p = strrchr(str1, 'i');
  //This function returns pointer to the last occurence
  //of the character in a given string

  printf("Character i is found at position %d\n", p - str1 + 1);
  printf("Last occurrence of character \"i\" in \"%s\" is \"%s\"", str1, p);

  return 0;
}