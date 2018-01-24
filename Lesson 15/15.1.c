# include <stdio.h>
typedef struct {
int x,y;} coords;

typedef struct {
int r , g , b;} color;

typedef struct {
 coords upperLeftCorner;
 int side;
 color outline,fillcolor;} square;

typedef struct {
    coords
} rectangular;
int main(){

    color white ={255,255,255};
    color red = {255,0,0};
    color black = {0,0,0};
    coords pt_corner1={5,5};
    square sq;

    sq.outline = red;
    sq.fillcolor = white;
    sq.upperLeftCorner=pt_corner1;
    sq.side = 4;
    return 0;

}
