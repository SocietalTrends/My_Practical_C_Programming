/* 黒とかげさん作 検証 */
#include<stdio.h>
#include<stdlib.h>
int main(){
		char s[7][4] = {{"唐"},{"澤"},{"貴"},{"洋"},{"食"},{"す"}};
		for(int i=0;i<6;i++){
				// printf("s[%d]:%s\n", i, s[i]);
				printf("%s", s[rand()%6]);
		}
}
