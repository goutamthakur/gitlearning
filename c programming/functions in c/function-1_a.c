//Function without argument and return value
#include <stdio.h>
void funct(); //function declaration
int main()
{
    printf("Hello\n");
    funct(); //function call
    return 0;
}
void funct() //function definition
{
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);
}