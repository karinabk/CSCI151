#include <stdio.h>
int main () {
int a[3][3],b[3][3],c[3][3];
int max=10,min=1,e,w,q,i,j,n,k,g,h;

for (i = 0; i < 3; i++) {
	for (j = 0; j < 3; j++) {
		a[i][j] = rand()% (max+1-min)+min;
	}
}
for (n = 0; n < 3; n++) {
	for (k = 0; k < 3; k++) {
		b[n][k] = rand()% (max+1-min)+min;
	}
}i=0;
k=0;

for (g = 0; g < 3; g++) {
	for (h = 0; h < 3; h++) {
        j=0;
        n=0;
		e=a[i][j]*b[n][k];
		j++,n++;
		w=a[i][j]*b[n][k];
		j++,n++;
		q=a[i][j]*b[n][k];
		c[g][h] =q+w+e;
        k++;
	}i++;
	k=0;
}
printf("First matrix\n");
for (i = 0; i < 3; i++) {
	for (j = 0; j < 3; j++) {
		printf("%5i",a[i][j]);

	}printf("\n");
}
printf("\nSecond matrix\n");
for (n = 0; n < 3; n++) {
	for (k = 0; k < 3; k++) {
		printf("%5i",b[n][k]);

	}printf("\n");
}
printf("Their product:\n");
for (g = 0; g < 3; g++) {
	for (h = 0; h < 3; h++) {
		printf("%5i",c[g][h]);

	}printf("\n");
}
return 0;
}


