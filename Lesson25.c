#include<stdio.h>
#include <stdlib.h>

typedef struct{
	double rain;
	double temp;
	double wind;
} weather;

double rainfall(weather *year){
double result=0;
	int i=0;
	for (;i<12;i++){
		result = result +(year+i)->rain;
	}
	printf ("totsl rainfall %lf\n",result);
	return 0;

}

double *lowesttemp(weather *year){
	int i;
	double k=year->temp;
	for (i=0;i<12;i++){
		if (k>(year+i)->temp){
			k=(year+i)->temp;
		} i++;
	}
	printf("lowest temp = %lf\n",k);
	return 0;
}

double average(weather *year){
	double sum,av;
	int i;
	for (i=0;i<12;i++){
		sum = sum+(year+i)->wind;
	} av = sum/12;
	printf(" average %lf\n",av);
	return 0;
}

int main (){
int i=0;
FILE *file;

file=fopen("astana.txt","r");
if (file==NULL){
	printf("problems with file\n");
}
printf ("opened\n");

weather *year=(weather*)malloc(12*sizeof(weather));
while (!feof(file)){

	fscanf(file,"%lf %lf %lf", &(year+i)->rain,&(year+i)->temp,&(year+i)->wind);
	i++;
}
rainfall(year);
lowesttemp(year);
average (year);
int k;
printf(" rain     temp      wind \n");
printf ("--------------------------\n");
for ( k=0;k<12;k++){
printf ("%2lf %7lf %9lf\n",(year+k)->rain,(year+k)->temp,(year+k)->wind);
}
return 0;
}
