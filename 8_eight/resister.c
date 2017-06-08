/* 一般化した数の抵抗を並列接続した場合の抵抗値を算出するプログラムを作成して下さい */
#include<stdio.h>
char line[100];
int value1;
int value2;
int resister;
int main(){
		printf("Enter a resistance value:(ex. 200 200)\n");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d %d", &value1,&value2);
		resister = value1 * value2 / (value1 + value2);
		printf("a resister value is about %d Ω.\n", resister);
		return(0);		
}
