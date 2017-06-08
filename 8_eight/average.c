/* n個の数値の平均値を計算するプログラムを計算して下さい */
#include<stdio.h>
char line[100];
int count;
char value[100];
int number;
int sum;
int average;
int main(){
		int i;
		printf("Enter a count:\n");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &count);
		for(i=0; i<count; i++){
			printf("Enter a number by your count:\n");
			fgets(value, sizeof(value), stdin);
			sscanf(value, "%d", &number);
			sum += number;
		}
		average = sum / count;
		printf("the average is %d.\n", average);
		return(0);
}
