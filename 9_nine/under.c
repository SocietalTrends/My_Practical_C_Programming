/* 文字列中で文字'-'（ハイフン）を検索し、それを文字'_'（アンダースコア）に置換する関数を作成して下さい。 */
#include<stdio.h>
char replace(char *line){
		for(int i=0; line[i]!='\0'; i++){
				if(line[i] == '-'){
						line[i] = '_';
				}
		}
		printf("置換後:%s\n", line);
}

int main(){
		char line[] = {'j','f','-','d','a','s','3','-','o','f','s','e','-'};
		replace(line);
}
