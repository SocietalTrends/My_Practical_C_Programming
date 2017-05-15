#include<stdio.h>
char value[100];
int width;
int height;
int outer;
int main(){
		printf("Enter width height?:");
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%d %d", &width, &height);
		outer = 2 * (width + height);
		printf("This outer circumference is %d\n", outer);
		return(0);
}
