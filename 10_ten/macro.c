/* パラメータが10で割り切れる場合は、真を、そうでない場合は偽を返すマクロを記述して下さい */
#include<stdio.h>
#define JUDGE(p) ((p) % 10)

int main(){
		int value = 20;
		int rest = JUDGE(value);
		if(rest == 0){
			printf("true\n");
		}else{
			printf("false\n");
		}
}
