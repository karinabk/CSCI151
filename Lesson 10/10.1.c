#include <stdio.h>

int main() {
    setvbuf(stdout,NULL,_IONBF,0);
    char st;
    int fr=0,i=0;
    printf("Enter a text\n");

    do {
        st=getchar();
        if (st =='a'){
        fr++;
    }
    } while(st != '\n');




    printf("The number of a is %i",fr);
    return 0;
}

