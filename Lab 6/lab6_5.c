//Write a menu driven program in C to create a structure employee having fields empid, empname, salary. Accept the details of 'n' Employees from the user and perform the following operations using the function.- Search by Emp-Id- Display All- Display Names of Employees having Salary > 10000

#include<stdio.h>
int main(){
    int n;
    printf("Enter No. of employes: ");
    scanf("%d",&n);

    typedef struct employe{
        char name[50];
        int id;
        int salary;
    }fields;

    //Here we aking input from the users
     fields arr[50];
    for(int i=0;i<n;i++){
        printf("Enter details of %d employe \n",i+1);
        printf("Enter the id: ");
        scanf("%d",&arr[i].id);

        printf("Enter the name: ");
        scanf("%s",arr[i].name);

        printf("Enter the salary: ");
        scanf("%d",&arr[i].salary);
       

       printf("\n");
    
    }
    for(int i=0;i<n;i++){
        if(arr[i].salary>10000){
            // printf("I.D.= %d",arr[i].id);
            // printf("Name= %s",arr[i].name);
            // printf("Salary = %d",arr[i].salary);
         printf("ID: %d, Name: %s, Salary: %d\n", arr[i].id, arr[i].name, arr[i].salary);
        }
        printf("\n");
    }


}