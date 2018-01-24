#include <stdio.h>

int minus (int x[],int from,int to){
	if (from==to){
		return x[from];
	}else {
		return minus(x,from,to-1)-x[to];
	}
}

