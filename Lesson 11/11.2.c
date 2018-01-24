/*
 * 11.2.c
 *
 *  Created on: 30 сент. 2017 г.
 *      Author: Karina
 */
#include <stdio.h>
int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	FILE *val;
	FILE *stor;
	FILE *new;
	val = fopen("values.txt","r");
	stor = fopen("story.txt","r");

	char result[10];
	printf("Enter a name of a file\n");
	scanf("%s",result);
	new=fopen(result,"w");

	if (val ==NULL||stor == NULL||new==NULL){
		printf ("Error with opening");
	return 1;}

	printf("files opened\n");

	char words[80],sym;
	do {fscanf(stor,"%c",&sym);
		if (sym=='$'){
			fscanf(val,"%s",words);
			fprintf(new,"%s",words);
		}else {fprintf(new,"%c",sym);}
	}while (!feof(stor));
	fclose(val);
	fclose(stor);
	fclose(new);

		return 0;
	}



