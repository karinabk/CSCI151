#include<stdio.h>

void printArray(double arr2[4]){
    int k;
    printf("reverse array:\n");
    for (k=0;k<4;k++)
    {printf(" %lf\n",arr2[k]);
    }
}
double rev(double arr[],int size){
    int k=size,i;
    double arr2[size];
    for (i=0,k=size-1;k<=0,i<size;k--,i++ ){

            arr2[k]=arr[i];


    } printArray(arr2);/* printf("reverse array:\n");
    for (k=0;k<size;k++)
    {printf(" %lf\n",arr2[k]);
    }*/
}


int main(){
     setvbuf(stdout, NULL, _IONBF, 0);
 double arr[4],arr2[4];
int i,h;
 printf("enter 4 numbers\n");
 for (i=0;i<4;i++){
    scanf("%lf",&arr[i]);
}
/*for (h=0;h<4;h++){*/
rev(arr,4);


return 0;
}
