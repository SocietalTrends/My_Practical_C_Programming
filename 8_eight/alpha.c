/* アルファベットを1文字読み、それが母音か子音かを出力するプログラムを作成して下さい。 */
#include<stdio.h>
char line[2];
int main(){
		printf("アルファベットを1文字入力して下さい:\n");
		fgets(line, sizeof(line), stdin);
		switch(line[0]){
				case 'a':
						// 下に続く
				case 'i':
						// 下に続く
				case 'u':
						// 下に続く
				case 'e':
						// 下に続く
				case 'o':
						printf("母音です。\n");
						break;
				default:
						printf("子音です。\n");
						break;
		}
		return(0);
}
