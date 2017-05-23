/* ヤード・ポンド法の単位をメートル法の単位に変換するプログラムを作成して下さい。（このケースではガロンをリットルに変換） */
#include<stdio.h>
char value[100];
float gallon;
float l;
float const GTOL = 4.54609;

int main(void){
		printf("Enter a volume by gallons:\n");
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%f", &gallon);
		l = gallon * GTOL;
		printf("This volume is %f\n", l);
		return(0);
}
