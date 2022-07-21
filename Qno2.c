
/* WAP to find the smallest number among 
three number using nested if else statement*/
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three numbers :>\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1<num2 && num1<num3){
        printf("%d is smallest number among %d,%d and %d",num1,num1,num2,num3);
    }
     else if (num2<num1 && num2<num3){
        printf("%d is smallest number among %d,%d and %d",num2,num1,num2,num3);
    }
     else{
        printf("%d is smallest number among %d,%d and %d",num3,num1,num2,num3);
    }
    return 0;
}