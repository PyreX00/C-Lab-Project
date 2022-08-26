#include<stdio.h>
int fact(int num);
int main(){
    int num;
    printf("Enter the number :> ");
    scanf("%d",&num);
    printf("The factorial at %d th place is %d.\n",num,fact(num));
    return 0;
}
int fact( int num){
    if ( num < 2 ){
        return 1;
    }else{
        return num*fact(num-1);
    }
}
