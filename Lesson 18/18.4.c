#include <stdio.h>

int  printBinary (int n){

    if (n==0){
        //printf("%i", n % 2);

        return 0;
    } else {
    printBinary(n/2);
    printf("%i", n % 2);
    }
}


int main () {
     int n;
     printf("enter a number:");
     scanf ("%i",&n);
     printBinary(n);

     return 0;
}
