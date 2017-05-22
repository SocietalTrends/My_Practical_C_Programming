#include<stdio.h>
char value[5];
int year;
int main(void){
		printf("Enter a year\n");
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%d", &year);
		if(year%4 == 0){
				if(year%100 == 0){
						if(year%400 != 0){
								printf("%d is not a leap year.\n", year);
						}else{
								printf("%d is a leap year.\n", year);
						}
				}else{
						printf("%d is a leap year.\n", year);
				}
		}else{
				printf("%d is not a leap year.\n", year);
		}
		return(0);
}
