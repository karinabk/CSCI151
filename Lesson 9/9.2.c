#include <stdio.h>
int main(){
int d,n,k=1 ;
printf("Enter an integer\n");
scanf("%i",&n);
while (k<n){
    if (n%k==0){
        printf("%i\n",k);
        k++;
    } else {k++;}
}
return 0;
}
