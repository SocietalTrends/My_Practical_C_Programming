/* 文字列を取り、文字列中の各文字の値を加算したハッシュコードを返す関数を作成してください */
#include<stdio.h>
int hash(char line[]){
		int value = 0;
		line[0] = 15;
		line[1] = 97;
		line[2] = 32;
		for(int i=0; line[i]!='\0'; i++){
			value += line[i];
		}
		return(value);
}
int main(){
		char line[] = "abc";
		printf("ハッシュ値の合計は%d\n", hash(line));
}
