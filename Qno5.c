#include<stdio.h>
int main(){
    int num,copy_num;
    int rem = 0,sum=0;
    printf("Enter the number:>\n");
    scanf("%d",&num);
    copy_num = num;
    while(num > 0){
        rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
    }
    if (copy_num == sum){
       printf("Entered number is plaindrome");
    }else{
        printf("Entered number is not plaindrome");
    }
    return 0;
}