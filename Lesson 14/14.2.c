#include<stdio.h>
struct student{
int ID;
char gender;
double final_grade;
double grades[5]; };
int main(){
int i;
double av,s=0;
    setvbuf(stdout, NULL, _IONBF, 0);
struct student S1;
printf("Enter your id:\n");
scanf("%i",&S1.ID);

printf("Enter your gender:\n");
scanf(" %c",&S1.gender);


for (i=0;i<5;i++){
   printf ("Enter your grade for quiz %i:\n",i+1);
scanf(" %lf",&S1.grades[i]);
    s += S1.grades[i];
} av=s/5;


printf( " ID: %i , gender: %c , final grade : %lf",S1.ID,S1.gender,av);

return 0;}
