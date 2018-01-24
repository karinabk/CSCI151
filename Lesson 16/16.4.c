#include <stdio.h>
#include <math.h>

void sumOfDigits (int n){
	int tyc,dec,sot,cel;
	int sum;
	tyc=n/1000;
	n=n%1000;
	sot=n/100;
	n=n%100;
	dec=n/10;
	n=n%10;
	cel=n;
	sum=tyc+sot+dec+cel;
	printf ("Sum of digits equals to %i",sum);
	//do i need return?
}

int main ( ){
	int n,val;
	printf ("Enter integer positive:\n");
	scanf("%i\n",&n);
	val = sumOfDigits(n);
	return 0;
}

