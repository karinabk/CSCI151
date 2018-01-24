#include<stdio.h>
int main(){
int R = 3, C = 4,c=4,r=3;
int a[C][R],b[c][r];

int i, j, val = 100;

for (i = 0; i < C; i++) {
	for (j = 0; j < R; j++) {
		a[i][j] = val;
		val++;
	}
}
for (i = 0; i < c; i++) {
	for (j = 0; j < r; j++) {
		b[i][j] = a[i][j]+25;

	}
}
for (i = 0; i < c; i++) {
	for (j = 0; j < r; j++) {
		printf("%5d", b[i][j]);
	}
	printf("\n");
}
}

