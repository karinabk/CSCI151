#include <stdio.h>

long choose (int n,int k){
    if (k==1){
    return n;

    }
    else {
    return (n-k+1)/k*choose(n,k-1);
    //printf("%lf",choose(n,k));

    }


}


int main () {
    int n=52,k=5;
int fu=choose(n,k);
    printf ("%i choose %i = %i",n,k, fu);
    return 0;
}
