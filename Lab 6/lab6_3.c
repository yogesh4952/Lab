// Write a C program to accept details of 'n' employees(eno, ename,salary) and display the details of employees having the highest salary. Use an array of structure.
#include<stdio.h>
int main(){
    typedef struct Employee{
        int eno;
        char name[100];
        int salary;

    }employe;
    employe emp[100];

    int n;
    printf("Enter no. of employee: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter the details of %d employe\n",i+1);

        printf("Enter Employe I.D.");
        scanf("%d",&emp[i].eno);

        printf("Enter Employee Name: ");
        scanf("%s",emp[i].name);

        printf("ENter Employee salary: ");
        scanf("%d",&emp[i].salary);

    }

    int max_salary=emp[0].salary;

    for(int i=1;i<n;i++){
        if(max_salary<emp[i].salary){
            max_salary=emp[i].salary;
        }
    }
    printf("Details of Employes having highest salary is :\n ");

    for(int i=0;i<n;i++){
        if(emp[i].salary == max_salary){

        printf("Id = %d\n",emp[i].eno);
        printf("Name= %s\n",emp[i].name);
        printf("Salary= %d\n",emp[i].salary);
        printf("\n");
        }
    }

}