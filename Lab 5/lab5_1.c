//WAP to input ‘n’ numbers and sort them in ascending order.
#include<stdio.h>
void ascending(int arr[5]);
int main(){
    int arr[5];
    printf("Enter number:");
    //Here we take input 5 values from the users
    for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
 }
 ascending(arr);
  printf("Sorted array in ascending order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
void ascending(int arr[5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i]<arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
        }
    }

}