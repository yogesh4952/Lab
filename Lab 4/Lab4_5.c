//WAP to check if the given number is pallindrome or not


//Using For loop
#include<stdio.h>
int main()
{
    int i,a,rev=0,num;
    printf("Enter a Number:");
    scanf("%d",&a);
    num=a;
    int value;
    for(i=a; i>0;i=i/10)
    { 
         value=i%10;
         rev=rev*10+value;

     
     }
      if(rev==num){
        printf("The numberer is pallindrome");

    }else{
        printf("The number is not");

    }
     
}


//Using while loop
/* 
#include<stdio.h>
int main()
{
    int n,rev=0,digit,num;
    printf("Enter a Number:");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;

    }
    if(rev==num){
        printf("The numberer is pallindrome");

    }else{
        printf("The number is not");

    }
    return 0;
}*/