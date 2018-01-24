#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	FILE *new;
	new = fopen("integ.txt","r");

	if (new== NULL){
		printf("File was not opened\n");
	return 1;
	}
	printf("FIle opened\n");

	int j=0;
	char str[20];
do {
	fscanf(new, "%s", str);
j=atoi(str)+j;

} while (!feof(new));

printf("the sum is %i",j);
fclose(new);
return 0;
}
