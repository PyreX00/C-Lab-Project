#include<stdio.h> 

struct student{
   char name[20];
   int roll_number;
   float percentage;
};

int main(){
    struct student s[4];
    for( int i = 0; i<4; i++){
        printf("Enter the name of student s[%d] :> \n",i);
        gets(s[i].name);
        printf("Enter roll number s[%d]:> \n",i);
        scanf("%d",&s[i].roll_number);
        printf("Enter the percentage s[%d]:> \n",i);
        scanf("%f",&s[i].percentage);
    }
    for ( int i = 0; i < 4; i++){
        if (s[i].percentage >60){
            printf("%s\n",s[i].name);
        }
    }
    return 0;
}