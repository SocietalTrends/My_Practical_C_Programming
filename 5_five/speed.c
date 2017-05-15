#include<stdio.h>
char value[100];
float distance;
float kilom;
float perMile;
const float MILE = 0.6213712;
int main(){
		printf("Enter a distance:");
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%f", &kilom);
		perMile = kilom * MILE / 1.0;
		printf("per hour miles is %f\n", perMile);
		return(0);
}
