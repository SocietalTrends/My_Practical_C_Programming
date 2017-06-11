/* 数値配列の最大値を返す関数を作成して下さい。 */
#include<stdio.h>
int maximum(int array[]){
		int temp;
		for(int i=0; i<sizeof(array)/sizeof(int); i++){
				temp = array[i];
				if(temp < array[i+1]){
						temp = array[i+1];
				}
		}
		return(temp);
}
int main(){
		int array[] = {5, 9, 8, 1, 2, 3, 4, 5};
		printf("最大値は%dです\n", maximum(array));
		return(0);
}

