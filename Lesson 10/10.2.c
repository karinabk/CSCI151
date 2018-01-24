#include <stdio.h>
int main() {

char tx;
printf("Enter a text\n");
do {
tx = getchar();
int x  = tx;
    if (x >=97) {
        x=x-32;
    }
    tx = x;
printf("%c", x);}
while (tx != '\n');
return 0;



 /*   do {tx=getchar();
    if (tx)}
        while (tx!='\n');
if
}*/

}
