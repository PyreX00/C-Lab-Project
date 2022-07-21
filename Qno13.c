#include<stdio.h>
 
int main(){
    int sum;
    int a,b,c;
    int *x,*y,*z;
    printf("Enter three numbers :> ");
    scanf("%d%d%d",&a,&b,&c);
    x = &a; y = &b; z = &c;
    sum = *x + *y + *z;
    printf("The sum of numbers is %d",sum);
    return 0;
}