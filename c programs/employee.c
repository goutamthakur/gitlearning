#include <stdio.h>
struct Address
{
    char HouseNo[25];
    char City[25];
    char PinCode[25];
};
struct Employee
{
    int Id;
    char Name[25];
    float Salary;
    char doj[25];
    struct Address Add;
};
void main()
{
    struct Employee E[10];
    for (int i = 0; i <= 9; i++)
    {
        printf("\nEnter Employee Id : ");
        scanf("%d", &E[i].Id);

        printf("\nEnter Employee Name : ");
        scanf("%s", E[i].Name);

        printf("\nEnter Employee Salary : ");
        scanf("%f", &E[i].Salary);

        printf("\nEnter Employee Date of Joining : ");
        scanf("%s", E[i].doj);

        printf("\nEnter Employee House No : ");
        scanf("%s", E[i].Add.HouseNo);

        printf("\nEnter Employee City : ");
        scanf("%s", E[i].Add.City);

        printf("\nEnter Employee PinCode : ");
        scanf("%s", E[i].Add.PinCode);
    }
    printf("\nDetails of Employees");
    for (int i = 0; i <= 9; i++)
    {
        printf("\n\tEmployee Id : %d", E[i].Id);

        printf("\n\tEmployee Name : %s", E[i].Name);

        printf("\n\tEmployee Salary : %f", E[i].Salary);

        printf("\n\tEmployee DOJ : %s", E[i].doj);

        printf("\n\tEmployee House No : %s", E[i].Add.HouseNo);

        printf("\n\tEmployee City : %s", E[i].Add.City);

        printf("\n\tEmployee PinCode : %s", E[i].Add.PinCode);
    }
}
