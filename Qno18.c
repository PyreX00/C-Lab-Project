#include<stdio.h>
struct book{
    char title[20];
    char author[20];
    int cost;
};
int main(){
   int total_cost =0;
   struct book piece[4];
   for ( int i = 0; i<4 ;i++){
    printf("Enter the name :>");
    scanf("%s",piece[i].title);
    printf("Enter the author:>");
    scanf("%s",piece[i].author);
    printf("Enter the cost :>");
    scanf("%d",&piece[i].cost);
   }
     for( int i = 0; i<4; i++){
        total_cost +=piece[i].cost;
    }
    printf("The total cost of books is %d", total_cost);
    return 0;
}