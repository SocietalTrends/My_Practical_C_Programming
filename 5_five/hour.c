#include<stdio.h>
char value[100];
int hour;
int minutes;
int main(){
		printf("Enter minutes?:");
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%d", &minutes);
		hour = minutes / 60;
		minutes = minutes % 60;
		printf("This time is %d hour(s) %d minutes.\n", hour, minutes);
		return(0);
}
