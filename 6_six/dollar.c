/* 指定された総額(1ドル以下)について、その内訳となる25セント、10セント、5セント、1セント硬貨の数を計算して下さい。 */
#include<stdio.h>
char value[100];
int dollar;
int count25;
int count10;
int count5;
int count1;

int main(void){
		printf("Enter an amount of money.(cent)\n");
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%d", &dollar);
		count25 = dollar / 25;
		dollar = dollar - 25 * count25;
		if(dollar != 0){
				count10 = dollar / 10;
				dollar = dollar - 10 * count10;
				if(dollar != 0){
					count5 = dollar / 5;
					dollar = dollar - 5 * count5;
					if(dollar != 0){
							count1 = dollar / 1;
							dollar = dollar - 1 * count1;
					}
				}
		}
		printf("Quarter is %d, Dime is %d, Nickel is %d, and Cent is %d.\n", count25, count10, count5, count1);
		return(0);
}

