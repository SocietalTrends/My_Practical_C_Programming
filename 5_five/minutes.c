#include<stdio.h>
char value[100];
int hour;
int minutes;
int main(){
		printf("Enter hour minutes?:");
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%d %d", &hour, &minutes);
		minutes = hour * 60 + minutes;
		printf("This time is %d minites.\n", minutes);
		return(0);
}
