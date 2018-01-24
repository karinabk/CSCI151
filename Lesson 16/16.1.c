#include <stdio.h>
#include <math.h>

double expApprox(double exp, int n){
	double exp1;
	int x, factorial=1,g;//where i have to declare?
		for (x=0;x<n;x++){

			for (g=1;g<=n;g++){
				factorial*=g;
			}exp1+=pow(x,n)/factorial;
		}
		return exp1;/*do i need return smth there*/
	}
int main (){
	int n = 6;
	double exp = 5;
	exp = expApprox(exp, n);
	printf("e^%i approximately equals to %lf",n,exp);
	return 0;
}
