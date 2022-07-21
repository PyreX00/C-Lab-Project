
/* Write a C code to check if user given 
input is exactly divisible by 5 or 11 
using nested if else statement*/
#include<stdio.h>

int main(){
    int num;
    printf("Enter the number:>\n");
    scanf("%d",&num);
    if ( num % 5 == 0){
        printf("number is divisible by 5");
    }
     else if ( num % 11 == 0){
        printf("number is divisible by 11");
    } else {
        printf("number is not divisible by both");
    }
    return 0;
}