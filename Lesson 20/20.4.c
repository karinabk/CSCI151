# include <stdio.h>

int count(  char str[]){
    int m=0,cn=0;
    while (str[m] != '\0') {
        cn++;
    m++;}
    return cn;
}

void concat (char str1[],char str2[],char result[]){
    int j;
    int i,k;
  int b = count(str1);
  int f=count(str2);
    for (i=0,j=0;i<b;j++,i++){
            result[j]=str1[i];
    }
    for (j=b,k=0;k<f;k++,j++){
        result[j]=str2[k];
    }
}


int main (){
char string1[20]="Privet! kak dela?";
char string2[30]="hochy domoi :(";
char result[50];
int i;

concat(string1,string2,result);
printf(" str1: %s \n str2: %s \n",string1,string2);
int b =count(result);
for (i=0;i<b-2;i++){
printf("%c",result[i]);}


 return 0;
}
