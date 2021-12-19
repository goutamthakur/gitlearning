#include <stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];

}e1;
void main(){
   e1.id = 1;
   strcpy(e1.name, "Goutam Thakur");
   printf("Employee 1 ID: %d\n", e1.id);
   printf("Employee 1 name: %s\n", e1.name);

}