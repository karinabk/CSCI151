#include <stdio.h>

_Bool areEqual(char str1[],char str2[]){
       char j;
    int i=0,count=0;
  while (str1[i]!='\0'){
    j=str1[i];
    if (str2[i]==j){
       count=0;
    }else {
    count++;}
  i++;}
  if (count==0){
    return 1;
  }else return 0;
}

int main(){
char string1[20]="Privet! kak dela?";
char string2[30]="Hochy domoi";
int j;
j=areEqual(string1,string2);
if (j  ==1){
   printf("they are the same");
}else {
    printf("they are different");
}



 return 0;
}
