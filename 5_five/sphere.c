#include<stdio.h>
char value[100];
float radius;
float volume;
const float PI = 3.1415927;
int main(){
		printf("Enter a radius:");
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%f", &radius);
		volume = 4.0 / 3.0 * PI * radius * radius * radius;
		printf("a volume of this sphere is %f\n", volume);
		return(0);
}
