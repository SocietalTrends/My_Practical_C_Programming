/* 文字列中の「語」数を数える関数を作成して下さい。
   語の定義：スペースで区切られた言葉(英語に限る) */

#include<stdio.h>
#include<string.h>
int word(char *line[]){
		int times = 0;
		for(int i=0; line[i]!='\0'; i++){
				//文章の語尾に達するまでスペースの数を計測
				if(line[i] == " "){
						times++;
				}
		}
		times = times + 1; //行末の語を足す
		return (times);
}

int main(){
		char *line[] = {"I'm"," ","22"," ","years"," ","old."," ","I"," ","am"," ","a"," ","male.\n"};
		printf("語数は%d\n", word(line));
		return(0);
}
