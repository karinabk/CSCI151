# include <stdio.h>
typedef struct {
int x,y;} coords;

typedef struct {
int r , g , b;} color;

//15.2 pentagon

 typedef struct {
	 color clr;
	 coords point[5];
 }pentagon;
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
    int i;
	pentagon shape;
    color white ={255,255,255};
    color red = {255,0,0};
    color black = {0,0,0};
   // work with file
    FILE *val;
    val = fopen("data.txt","r");
    if (val ==NULL){
    		printf ("Error with opening");
    	return 1;}
    printf("opened");
    fscanf(data,"%c",&shape.clr);// esli color to chr?ili int?
    for(i=0;i<5;i++){
    fscanf(data,"%i",&shape.point[i])

    return 0;

}


