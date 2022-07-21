#include<stdio.h>
struct employee {
    char name[20];
    char address[30];
    int salary;
};

int main(){
   struct employee emp[5];
   for (int i = 0; i < 5;i++){
    printf("Enter the name of employe [%d] :> ",i);
    scanf("%s",emp[i].name);
    printf("Enter the address of employee [%d] :> ",i);
    scanf("%s",emp[i].address);
    printf("Enter the salary [%d] :> ",i);
    scanf("%d", &emp[i].salary);
   }
   for ( int i = 0; i < 5; i++){
    if ( emp[i].salary>10000){
        printf("%s \n",emp[i].name);
    }
   }
}