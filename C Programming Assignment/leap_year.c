/*Leap Year: Write a program to check whether a given year is a leap year or not.*/
 /*Name:Yogesh Shah
  Sem:1st
  Roll No:19*/

  #include<stdio.h>
  int main()
  {
    int a;
    printf("Enter a year : ");
    scanf("%d",&a);

    if(a%400==0 ||( a%4==0 && a%100!=0)){
        printf("%d is the leap year",a);
    }
    else{
        printf("%d is not a leap year",a);
    }
    return 0;
  }
