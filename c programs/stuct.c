//Program to take details of employee and displays the details
#include <stdio.h>
struct Address{
    char HouseNo[100];
    char City[100];
    char PinCode[100];
};
struct Employee{
    char Id;
    char Name[100];
    float Salary;
    char doj[100];
    struct Address Add;
};
void main(){
    int n;
    printf("Enter the number of the employee: ");
    scanf("%d", &n);

    struct Employee E[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("****Enter the details for Employee %d****\n", i+1);

        printf("Enter Employee Id : ");
        scanf("%s", &E[i].Id);

        printf("Enter Employee Name : ");
        scanf("%s", &E[i].Name);
        
        printf("Enter Employee Salary : ");
        scanf("%f", &E[i].Salary);

        printf("Enter Employee Date of Joining : ");
        scanf("%s", &E[i].doj);

        printf("Enter Employee House No : ");
        scanf("%s", &E[i].Add.HouseNo);

        printf("Enter Employee City : ");
        scanf("%s", &E[i].Add.City);

        printf("Enter Employee PinCode : ");
        scanf("%s", &E[i].Add.PinCode);

    }
        printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Details of Employee %d :-", i+1);

        printf("\n\tEmployee Id : %d", E[i].Id);

        printf("\n\tEmployee Name : %s", E[i].Name);

        printf("\n\tEmployee Salary : %f", E[i].Salary);

        printf("\n\tEmployee DOJ : %s", E[i].doj);

        printf("\n\tEmployee House No : %s", E[i].Add.HouseNo);

        printf("\n\tEmployee City : %s", E[i].Add.City);

        printf("\n\tEmployee PinCode : %s", E[i].Add.PinCode);

        printf("\n\n");
    }
}
