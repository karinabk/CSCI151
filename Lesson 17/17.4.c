#include <stdio.h>

void printArray(double arr2[3][3]){
    int k,g;

    for (k=0;k<3;k++)
    {for(g=0;g<3;g++){
        printf(" %4.lf",arr2[k][g]);}
   printf("\n"); }
}

double transpose (int row,int col, double orig[row][col]){
    double result[col][row];
    int i,k,h,g;
    for (i=0;i<row;i++){
        for(k=0;k<col;k++){

            result[k][i] = orig[i][k];
        }
    } printArray(result);
}

int main(){

    int q,w;
   double or[3][3] = {
  {9,8,7},
  {3,5,4},
  {9,5,6}

  };
  printf("Original array:\n");
printArray(or);



  /*  for (q=0;q<3;q++){
        for (w=0;w<3;w++){
            printf("%4.lf",or[q][w]);
        }printf("\n");
    }*/
    printf("transpose array:\n");
    transpose(3,3,or);
    return 0;
}
