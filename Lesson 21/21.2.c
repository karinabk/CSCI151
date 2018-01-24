#include <stdio.h>
#include <math.h>

double strToDouble(char str[]) {
	int i = 0, sign, intValue, dotplace, k, eplace, epower, j;
	double result1 = 0, result2 = 0, result3 = 0, result, esign;

	if (str[0] == '-') {
		sign = -1;
		i = 1;
	} else {
		sign = 1;
	}

	for (; str[i] >= '0' && str[i] <= '9'; i++) {
		intValue = str[i] - '0';
		result1 = result1 * 10 + intValue;
		dotplace = i;
	}
	if (str[i] == '\0') {
		return result1 * sign;

	}

	for (k = dotplace + 2; str[k] >= '0' && str[k] <= '9'; k++) {
		intValue = str[k] - '0';
		result2 = result2 * 10 + intValue;
		eplace = k;
	}

	if (str[k] == '\0') {
		return sign * (result1 + result2);

	}
	if (str[eplace + 2] == '-') {
		epower = eplace + 3;
		esign = -1;
	} else {
		epower = eplace + 2;
		esign = 1;
	}

	for (j = epower; str[j] >= '0' && str[j] <= '9'; j++) {
		intValue = str[j] - '0';
		result3 = result3 * 10 + intValue;
	}

	result = sign * (result1 + result2 * pow(10, -(eplace - dotplace - 1)))
			* pow(10, esign * result3);
/*	if(esign == -1){
		int l;
		for(l =0; l < result3; l++ ){
			result /= 10;
		}
	} else {
		int l;
		for(l =0; l < result3; l++ ){
			result *= 10;
		}
	}
*/
	return result;
}

int main() {
	printf("%lf\n", strToDouble("34"));
	printf("%lf\n", strToDouble("-34"));
	printf("%.12f\n", strToDouble("487.4e-10"));
	return 0;
}
