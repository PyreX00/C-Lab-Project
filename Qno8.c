#include<stdio.h>

int main(){
    int arr[10];
    int sum = 0,avg=0;
    for ( int i = 0;i<10;i++){
        printf("Enter the number at [%d] :> ",i);
        scanf("%d",&arr[i]);
    } 
     for ( int i = 0;i<10;i++){
       sum+=arr[i];
    } 
    avg = sum/10;
    printf("The sum of numbers in array is %d.\n",sum);
    printf("The average of entered number is %d.\n",avg);
    return 0;
} 

