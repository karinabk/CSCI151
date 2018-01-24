#include <stdio.h>
#include<stdlib.h>



char* stringCopy (char* fromStr){

    char* toStr=(char*)malloc(sizeof(char));
   /* if (toStr==NULL){
        return 1;
    }*/
    int i=0;
    while (*fromStr!='\0'){
        *toStr=*fromStr;
        toStr++;
        fromStr++;
        i++;
    }
    *toStr='\0';
    for (;i!=0;i--){
        toStr--;
    }

    return toStr;


}


int main (){
char string1[]="Privet! kak dela?";

char* val=stringCopy(string1);
printf("from:%s\n",string1);
printf("to:");
    while (*val!='\0'){
        printf("%c",*val);
        val++;
    }
 return 0;
}
