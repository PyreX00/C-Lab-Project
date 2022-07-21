#include<stdio.h>

int main(){
    int num;
    int sum =0,i=0;
    printf("Enter the number :> ");
    scanf("%d",&num);
    while(i <= num){
        sum = sum + i*i*i;
        i++;
    }
    printf("%d",sum);
    }