#include <stdio.h>


int count(  char str[]){
    int m=0,cn=0;
    while (str[m] != '\0') {
        cn++;
    m++;}
    return cn;
}

void reverse(char fromStr[],char toStr[]){
    int j;
    int i;
  int b = count(fromStr);
    for (i=0,j=b-1  ;j>0,i<b;j--,i++){

            toStr[j]=fromStr[i];

    }
}


int main (){
char string1[20]="Privet! kak dela?";
char string2[30];
reverse(string1,string2);
printf(" original %s \n reverse: %s",string1,string2);


 return 0;
}
