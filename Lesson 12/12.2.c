#include <stdlib.h>
#include <stdio.h>
int main () {
int arr[20],i, max=100,min=50,av,sum=0;
for (i=0;i<20;i++){
    arr[i] = rand() % (max+1-min)+min;
}
    for (i=0;i<20;i++){
        printf("Random values %i\n",arr[i]);
        }
    for (i=0;i<20;i++){
        sum +=arr[i];
        }
        av=sum/20;
        printf("Average is %i ",av);
        max=arr[0];
        min=arr[0];
    for (i=0;i<20;i++){
        if (arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min){
        min=arr[i];    }}
        printf("max value is %i and min value is %i",max,min);

    return 0;
}
