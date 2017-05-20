/* 数値で指定された成績を、文字で表して出力してください */
#include<stdio.h>

char value[100];
int percent; /* 正解% */
char record;

int main(){
		printf("Enter your score.\n");
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%d", &percent);
		if(percent <= 60){
				record = 'F';
		}else if(percent <= 70){
				record = 'D';
		}else if(percent <= 80){
				record = 'C';
		}else if(percent <= 90){
				record = 'B';
		}else if(percent <= 100){
				record = 'A';
		}else{
				printf("Please enter your correct score.\n");
				return(0);
		}
		printf("Your record is %c\n", record);
		return(0);
}
				

