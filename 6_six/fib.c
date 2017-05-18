#include<stdio.h>
int old_number;
int current_number;
int next_number;
int main(){
		/* フィボナッチ数列を開始 */
		old_number = 1;
		current_number = 1;
		printf("%d\n",old_number);
		while(current_number < 100){
				printf("%d\n", current_number);
				next_number = current_number + old_number;
				old_number = current_number;
				current_number = next_number;
		}
		return(0);
}
