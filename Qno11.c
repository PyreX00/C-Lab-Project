#include<stdio.h>
int Fibonacci(int noOfTerms);
  int first = 0;
  int second = 1;

int main(){
    int nOft;
    printf("Enter the No Of Terms :> ");
    scanf("%d", &nOft);
    Fibonacci(nOft);
}
int Fibonacci(int noOfTerms){
    if ( noOfTerms != 0){
        int next = first + second ;
        printf("%d \t",first);
        first = second;
        second = next ;  
        Fibonacci(noOfTerms-1);
    }
    return 0;
}