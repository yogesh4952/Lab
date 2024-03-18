#include<stdio.h>

int main(){

    int n;
    printf("enter the no.of bits in binary number:");
    scanf("%d",&n);
    int binary[n];
    for(int i=0; i<n; i++)
    {

        printf("enter the %d  bit:",i+1);
        scanf("%d",&binary[i]);
    }
    printf("before conversion,\n");
    for(int i=0; i<n; i++){
        printf(" %d",binary[i]);
        binary[i]=(binary[i]==1)?0:1;
       
    }

    printf("\nafter conversion,\n");
    for(int i=0; i<n; i++){
        printf(" %d",binary[i]);
    }
    int carry=1; 
    for(int i=n-1; i>=0; i--){
        binary[i]=binary[i]+carry;
        carry=binary[i]/2;
        binary[i]=binary[i]%2;
    }
    printf("\nthe 2's complement is,\n");
    for(int i=0; i<n; i++){
        printf(" %d",binary[i]);
    }


return 0;
}