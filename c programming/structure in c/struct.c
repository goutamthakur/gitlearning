#include <stdio.h>
#include <string.h>

struct employee
{
    int Id;
    char name[50];
    int roll_no;
}emp1;

int main()
{
    emp1.Id = 3399;
    strcpy(emp1.name, "Goutam Thakur");
    emp1.roll_no = 38;

    printf("Employee 1 Id : %d\n", emp1.Id);
    printf("Employee 1 name : %s\n", emp1.name);
    printf("Employee 1 roll no : %d\n", emp1.roll_no);
    
    return 0;
}