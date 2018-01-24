# include <stdio.h>

struct time {
	int hours;
	int minutes;
	char amORpm;
	int advMins;
	};

int main (){
   struct time now = {6,30,'b',0};

    if (now.amORpm == 'a') {
        printf("%i in minutes",now.advMins= now.hours * 60 +now.minutes);
    }else if (now.amORpm=='b') {
    	now.advMins=(now.hours+12)*60+now.minutes;
        printf("%i in minutes",now.advMins);
    }

return 0;
}
