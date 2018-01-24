#include<stdio.h>

double ind(int size, double arr[]){
         int k,index=0;
         double sm=arr[0];
         for (k=0;k<size;k++){
            if (sm>arr[k]){
                sm=arr[k];
                index=k;

            }
         } printf(" smallest number %lf, index is %i",sm,index);

}

int main (){
    setvbuf(stdout, NULL, _IONBF, 0);
    int k;
double arr[3];

printf("Enter 3 numbers\n");
for (k=0;k<3;k++){
    scanf("%lf",&arr[k]);
    }
ind (3, arr);


return 0;
}
