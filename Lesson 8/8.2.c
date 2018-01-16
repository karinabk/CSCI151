#include <stdio.h>
	int main() {
		setvbuf(stdout,NULL,_IONBF,0);
		int de,oct,p=0;
		printf("Enter an integer\n");
		scanf("%i",&de);
		printf("%i=",de);
		do {

			oct=de%8;
			de=de/8;
			printf("+(%i*8^%i)",oct,p);
			p++;

		}while (de>0);
		return 0;
		printf("done");
	}
