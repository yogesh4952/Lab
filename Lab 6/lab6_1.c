// Write a C program to accept the details of employees and display them using structure. Details consist of Employee ID, Name,Designation, Department, Salary


#include<stdio.h>


typedef struct employe{
    int id;
    char name[50];
    char designation[50];
    char Department[50];
    int salary;

}employe;



int main(){

    employe emp[100];
    for(int i=0;i<2;i++){
        printf("Enter the %d person employe id: ",i+1);
        scanf("%d",&emp[i].id);
       

    printf("Enter name: ");
    scanf("%s",emp[i].name);

      
    
        printf("Enter Designation: ");
        scanf("%s",emp[i].designation);
    

        printf("Enter Department: ");
        scanf("%s",emp[i].Department);
      
        printf("Enter salary(in cr.): ");
        scanf("%d",&emp[i].salary);
        printf("\n");
       

    }

for(int i=0;i<2;i++){

    printf("I.D.:  %d\n",emp[i].id);
    printf("Name:  %s\n",emp[i].name);
    printf("Designation:  %s\n",emp[i].designation);
    printf("Department:  %s\n",emp[i].Department);
    printf("Salary:  %dcr\n",emp[i].salary);
}

return 0;
    

}