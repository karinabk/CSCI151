
#include<stdio.h>


double power (double x, int n){
    if(n==0){
            return 1;
    }
    else if (n>0) {
        if (n%2==1){
        return  x*power(x,n/2)*power(x,n/2);
        } else {
        return power(x,n/2)*power(x,n/2);
    };
    }else if (n<0) {
    return 1/(x*power(x,-n-1));
    }
    }
int main (){
double v;
int j;
for(j=-2;j<6;j++){
    for (v=1;v<=5;v=v+0.5){
        printf("%.1f^%i=%.3f\n",v,j,power(v,j));
    }
} return 0;
}
