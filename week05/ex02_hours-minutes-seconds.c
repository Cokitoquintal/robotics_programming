#include <stdio.h>
int main() {
	float sec, hours, minutes, seconds;
	printf("Number of seconds to convert: ");
	scanf("%d", &sec);
	
	hours = (sec/3600); 
	
	minutes = (sec -(3600*hours))/60;
	
	seconds = (sec -(3600*hours)-(minutes*60));
	
	printf("Hours: %d, minutes: %d, and seconds %d: - \n",hours,minutes,seconds);
	
	return 0;
}
