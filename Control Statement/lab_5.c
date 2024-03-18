//Use a do-while loop to check if a user's input is an even number, prompting them to re-enter if not.
#include<stdio.h>
int main()
{
    int num,result;
    
    do{
    printf("Enter a Number : ");
    scanf("%d",&num);
    result=num%2;
    if(result!=0){
        printf("Your entered value is not a even Number.\nEnter again!\n");
    }
    else{
        printf("You entered number is Even!!!");

    }
    
    }while(result!=0);
}