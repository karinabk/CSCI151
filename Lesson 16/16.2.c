#include <stdio.h>
#include <math.h>

double sinApprox(float x, int n){
	double sin;
	int factorial, g;	//where i have to declare?
		for (x=1;x<n;x++){
		int y = (int)x % 2;
			if (y == 0){
				sin+=-pow(x,x+2)/factorial;
			}else {
			sin+=pow(x,x+2)/factorial;}
			for (g=1;g<=x+2;g++){
				factorial*=g;
			}
		}
	return sin;
	}
int main (){
	int n;
	float sin;
	sin = sinApprox(5,6);
	printf("sin%i approximately equals to %lf",n,sin);
	return 0;
}
