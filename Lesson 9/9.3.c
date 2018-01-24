#include <stdio.h>

int main(){
    setvbuf(stdout,NULL,_IONBF,0);
int day,d;
printf("Enter the day\n");
scanf("%i",&day);
if (day>1,day<366) {
    if (day<=31){printf(" %i th of January,",day);}
    else if (day<=60){
            d=day-31;
        printf("%i th of February,",d);
    }else if (day<=91){
        d=day-60;
    printf("%i th of March,",d);}
    else if (day<=121){
        d=day-91;
    printf("%i th of April,",d);}
    else if (day<=152){
        d=day-121;
    printf("%i th of May,",d);}
    else if (day<=182){
        d=day-152;
    printf("%i th of June,",d);}
    else if (day<=213){
        d=day-182;
    printf("%i th of July,",d);}
    else if (day<=244){
        d=day-213;
    printf("%i th of August,",d);}
    else if (day<=274){
        d=day-244;
    printf("%i th of September,",d);}
    else if (day<=305){
        d=day-244;
    printf("%i th of October,",d);}
    else if (day<=335){
        d=day-305;
    printf("%i th of November,",d);}
    else if (day<=366){
        d=day-335;
    printf("%i th of December,",d);}}
else {
    printf("Error");
    }


if ((day+4)%7==1){
    printf("Monday ");
}else if ((day+4)%7==2){
printf("Tuesday");}
else if ((day+4)%7==3) {
    printf("Wednesday");
}else if ((day+4)%7==4) {
    printf("Thursday");
}else if ((day+4)%7==5) {
    printf("Friday");
}else if ((day+4)%7==6) {
    printf("Saturday");
}else {
    printf("Sunday");
}
return 0;
}



