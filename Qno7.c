#include<stdio.h>

int main(){
    int mat[2][2],trans_mat[2][2];
    for ( int i = 0; i < 2; i++){
        for ( int j = 0; j < 2; j++){
           printf("Enter the number [%d][%d]  :>",i,j);
           scanf("%d",&mat[i][j]);
        }
    }
    for ( int i = 0; i < 2; i++){
        for ( int j = 0; j < 2; j++){
        trans_mat[j][i]= mat[i][j];
        }
    }
    printf("The transpose of entered matrix is\n");
     for ( int i = 0;i < 2; i++){
        for ( int j = 0; j < 2 ;j++){
        printf("%d\t",trans_mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}