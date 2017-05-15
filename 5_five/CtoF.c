#include<stdio.h>
char celsius[100];
float degree;
float fahrenheit;
int main(){
		printf("Enter a degree Celsius:");
		fgets(celsius, sizeof(celsius), stdin);
		sscanf(celsius,"%f", &degree);
		fahrenheit = 9.0 / 5.0 * degree + 32.0;
		printf("the degree fahrenheit is %f\n", fahrenheit);
		return(0);
}
