#include <stdio.h>
int main () {
int arr[5][4];
int i,j,min=0,max=100;
for (i = 0; i < 5; i++) {
	for (j = 0; j < 4; j++) {
		arr[i][j] = rand() % (max+1-min)+min;
	}
}
max=arr[0][0];
min = arr [0][0];
for (i = 0; i < 5; i++) {
	for (j = 0; j < 4; j++) {
		if (max < arr[i][j])
		max=arr[i][j];	}
		if (arr[i][j]<min){
            min=arr[i][j];
		}
}
for (i = 0; i < 5; i++) {
	for (j = 0; j < 4; j++) {
		printf("%5i",arr[i][j]);
	}printf("\n");
}printf("max is %i , min is %i",max,min);
}
