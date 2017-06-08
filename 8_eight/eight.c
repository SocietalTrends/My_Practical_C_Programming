/* 数字で表した数値を英文で表したものに変換するプログラムを作成して下さい。 */
#include<stdio.h>
#include<string.h>
char line[100];
char value[100];
int main(){
		int i;
		printf("数値を入力して下さい:\n");
		fgets(line, sizeof(line), stdin);
		for(i=0; i<strlen(line); i++){
				switch(line[i]){
						case '0':
								strcat(value, "zero ");
								break;
						case '1':
								strcat(value, "one ");
								break;
						case '2':
								strcat(value, "two ");
								break;
						case '3':
								strcat(value, "three ");
								break;
						case '4':
								strcat(value, "four ");
								break;
						case '5':
								strcat(value, "five ");
								break;
						case '6':
								strcat(value, "six ");
								break;
						case '7':
								strcat(value, "seven ");
								break;
						case '8':
								strcat(value, "eight ");
								break;
						case '9':
								strcat(value, "nine ");
								break;
				}
		}
		printf("%s\n", value);
		return(0);
}
