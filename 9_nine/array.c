/* 配列array中に数値numberがいくつあるかを数える関数count(number, array, length)を作成して下さい。この関数は再帰関数になるはずです。 */
#include<stdio.h>
int result = 0;
int count(int number, int array[], int length){
		if(length==0){
				return(result);
		}
		if(number == array[length-1]){
				result++;
		}
		return(count(number, array, length-1));
}
int main(){
		int array[5] = {10, 20, 11, 32, 20,};
		int number = 10;
		printf("要素数は%dです\n", count(number,array, 5));
}
