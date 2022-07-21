#include<stdio.h>
#include<string.h>

int  main(){
   char string[100];
   printf("Enter the string :> ");
   gets(string);
//    scanf("%s",string);
   int length = strlen(string);
   printf("The length of string is %d",length);
   return 0;  
}