#include<stdio.h>

int main(){
    int arr[10];
    for ( int i = 0;i<10;i++){
        printf("Enter the number at [%d] :> ",i);
        scanf("%d",&arr[i]);
    }
    for ( int i = 0;i < 10; i++){
        for (int j = i+1; j<10; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array in ascending order\n");
     for ( int i = 0;i<10; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
// Qno 10 is repeated or same as Qno 8