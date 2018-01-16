#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
int n,s;

do {
    printf("Enter an integer\n");
    scanf("%i",&n);
    s=n*n;
    printf("The number squared is %i\n",s);

} while (n>0);
printf("Done");
return 0;

}

