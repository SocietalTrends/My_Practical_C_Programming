/* 文字列string1の先頭が文字列string2なら真を返す関数begins(strings1, strings2)を作成して下さい */
#include<stdio.h>
int begins(char *string1[], char *string2[]){
		int b = 1;
		for(int i=0; string1[i] != '\0'; i++){
				//printf("%s %s\n%d\n", string1[i], string2[i], b);
				if(string1[i] != string2[i]){
						if(string2[i] == "\0"){
								return(b);
								break;
						}
						b = 0;
						return(b);
						break;
				}
		}
}
int main(){
		char *string1[] = {"a","p","p","l","e","\0"};
		char *string2[] = {"a","p","p","\0"};
		if(begins(string1, string2)){
				printf("真です");
		}else{
				printf("偽です");
		}
		return(0);
}
