/* 配列array中に数値numberがいくつあるかを数える関数count(number, array, length)を作成して下さい。この関数は再帰関数になるはずです。 */
/*再帰を用いない場合 */
#include<stdio.h>
int count(int number, int array[], int length){
		int result = 0;
		for(int i=0; i<length; i++){
				if(number == array[i]){
						result++;
				}
		}
		return(result);
}
int main(){
		int array[5] = {10, 20, 11, 32, 20,};
		int number = 10;
		printf("要素数は%dです\n", count(number,array, 5));
}
