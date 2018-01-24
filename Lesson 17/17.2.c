#include<stdio.h>

double maxVal(int len,double arr[len][len]){

    int i,j;
    double max=arr[0][0];
    for (i=0;i<len;i++){
        for(j=0;j<len;j++){
            if (max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }printf ("max value %lf",max);
}
int main(){
    int i,j;
    double arr[2][2];
setvbuf(stdout, NULL, _IONBF, 0);
    printf("enter 4 numbers\n");
    for (i=0;i<2;i++){
            for (j=0;j<2;j++){
        scanf("%lf",&arr[i][j]);
            }
}
maxVal(2,arr);
return 0;
}
