/* 掛け算九九表を出力するプログラムを作成して下さい */
#include<stdio.h>
int ans;
int main(){
		int i;
		int j;
		for(i=1; i<10; i++){
				for(j=1; j<10; j++){
						ans = i * j;
						if(j == 9){
								if(ans / 10 != 0){
									printf("%d \n", ans);
								}else{
									printf("%d  \n", ans);
								}
						}else{
								if(ans / 10 != 0){
									printf("%d ", ans);
								}else{
									printf("%d  ", ans);
								}
						}
				}
		}
		return(0);
}

