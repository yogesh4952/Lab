// WAP to convert from binary number system to decimal number system

 
#include<stdio.h>
int main()
{
    int binary,rem;
    printf("Binary Number: ");
    scanf("%d",&binary);
    int decimal=0; 
    int weight=1;

    
    while(binary!=0)
    {
     rem=binary%10;
     decimal=decimal+rem*weight;
     binary=binary/10;
     weight=weight*2;
    }
    printf("%d",decimal);
    return 0;

}

//Using for loop
// WAP to convert from binary number system to decimal number system
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int binary,weight=0, decimal=0,num=0,rem;
//     printf("Enter a Number: ");
//     scanf("%d",&binary);
   
//     num=binary;
//     for(int i=num; i>0; i=i/10){
    
//     rem=binary%10;
//     decimal=decimal + rem*pow(2,weight);
//     weight++;

//    }
//    printf(" %d",decimal);
//    return 0;

// }