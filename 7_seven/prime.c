/* 数値が素数かどうかを判断し、それを通知するプログラムを作成して下さい。 */
#include<stdio.h>
char value[100];
int p_num;
int main(void){
		printf("Enter a number:\n");
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%d", &p_num);
		int i;
		for(i = 2; i<p_num; i++){
			if(p_num%i == 0){
					printf("%d is not a prime number.\n", p_num);
					return(0);
			}
		}
		printf("%d is a prime number.\n", p_num);
		return(0);
}
