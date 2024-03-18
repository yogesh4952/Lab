    //Calculate  and display the sum of odd natural numbers upto n terms

    #include<stdio.h>
    int main()
    {
        int a,i;
        int sum=0;
        printf("Enter a Number:");
        scanf("%d",&a);
       
            for(i = a; i >= 1; i--)
           {
           
              if(i%2!=0){
                sum=sum+i;
              }  }
            printf("Sum:%d",sum);
            

        return 0;
    }
