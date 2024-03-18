/*Largest of Three Numbers: Write a program to find the largest among three numbers.*/
  /*Name:Yogesh Shah
  Sem:1st
  Roll No:19*/
  
  #include<stdio.h>
  int main()
  {
    int num1,num2,num3;
    printf("Enter the 1st Number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd Number : ");
    scanf("%d",&num2);
    printf("Enter the 3rd Number : ");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3){
        printf("%d is the largest number ",num1);
    }
    if(num2>num1 && num2>num3){
        printf("%d is the largest number ",num2);
    }
    if(num3>num2 && num3>num1){
        printf("%d is the largest number ",num3);
    }
    return 0;
  }