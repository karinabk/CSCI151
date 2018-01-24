/*
 * 16.5.c
 *
 *  Created on: 17 окт. 2017 г.
 *      Author: Karina
 */
#include <stdio.h>

void _BoolisIdial(int n){
	int i,sum=0;
	for (i=0;i<n;i++){
		if (n%i==0){
			sum+=i;
		}
	}
	if (sum == 28){
		printf ("it is an ideal number");

	} else {printf ("it is not an ideal number");}
}

int main () {
	int n;
	 printf("Enter a positive integer\n");
	 scanf("%i\n",&n);
	 _BoolisIdial(n);
	 return 0;
}
