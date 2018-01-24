#include<stdio.h>

int addSubarray(int x[],int from,int to){
if (from == to) {
    return x[from];
} else {
return addSubarray(x,from+1,to)+x[from];}
}

int minValue(int arr[],int from,int to){
    int min;
   if (from >=to -2){
    if (arr[from]<arr[from+1]){
        return arr[from];
    }else {
    return arr[from+1];
    }
   }
   min  = minValue (arr,from +1, to);
   if (arr[from]< min){
    return arr[from];
   }else {return min;}
}


int main() {
    int arr[8] = {4,3,-2,7,2,5,-1,0};
    printf("sum =%i\n",addSubarray(arr,0,7));
    printf("sum =%i\n",addSubarray(arr,1,5));
    printf("sum =%i\n",addSubarray(arr,4,6));
    printf("min =%i\n",minValue(arr,0,7));
    return 0;

 }
