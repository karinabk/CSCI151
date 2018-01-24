#include <stdio.h>

  int main(){
    float grade;
    printf("Enter your final grade percentage\n"),
    scanf("%g",&grade);
  if (grade>95){
      printf("A");}
  else if (grade>90){
      printf("A-");
  }
  else if (grade>85){
      printf("B+");
  }
  else if (grade>80){
      printf("B");
  }
  else if (grade>75){
      printf("B-");
  }
  else if (grade>70){
    printf("C+");
  }
  else if (grade>65){
    printf("C");
  }
  else if (grade>60){
    printf("C-");
  }
  else if (grade>55){
    printf("D+");
  }
  else if (grade>50) {
      printf("D");
  }
  else {
      printf("F");
  }
   return 0;
  }
