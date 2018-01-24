#include <stdio.h>
int main () {

  int arr[12][12],fn=1, row, i, j;

  for (i = 0; i < 12; i++) {
     for (j = 0; j < 12; j++) {
          arr[i][j]=i*j;
     }
  }
  for (i = 0; i < 12; i++) {
      for (j = 0; j < 12; j++) {
        printf("%4i",arr[i][j]);
      }
    printf("\n");
  }
  return 0;
}
