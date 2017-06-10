/* 承前のプログラムを、扱う数値が0から100までで、そのすべての数値を英語に訳すように修正して下さい。 */
#include<stdio.h>
#include<string.h>
char line[100];
char value[100];
int result;
int digit;
int main(){
		result = 0;
		int i;
		printf("数値を入力して下さい:\n");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &result);
		i = result;
		while(i != 0){
				i =  i / 10;
				digit++;
		}
		if(digit == 2){
				/* 2桁の数の場合 */
			if(line[0] == '1'){
					/* 10の位が1の場合 */
				switch(line[1]){
							case '0':
								strcat(value, "ten");
								break;
							case '1':
								strcat(value, "eleven");
								break;
							case '2':
								strcat(value, "twelve");
								break;
							case '3':
								strcat(value, "thirteen");
								break;
							case '4':
								strcat(value, "fourteen");
								break;
							case '5':
								strcat(value, "fifteen");
								break;
							case '6':
								strcat(value, "sixteen");
								break;
							case '7':
								strcat(value, "seventeen");
								break;
							case '8':
								strcat(value, "eighteen");
								break;
							case '9':
								strcat(value, "nineteen");
								break;
				}
			}else{
					/* 10の位が1以外の場合 */
					switch(line[0]){
							case '0':
								strcat(value, "");
								break;
							case '1':
								break;
							case '2':
								strcat(value, "twenty");
								break;
							case '3':
								strcat(value, "thirty");
								break;
							case '4':
								strcat(value, "forty");
								break;
							case '5':
								strcat(value, "fifty");
								break;
							case '6':
								strcat(value, "sixty");
								break;
							case '7':
								strcat(value, "seventy");
								break;
							case '8':
								strcat(value, "eighty");
								break;
							case '9':
								strcat(value, "ninety");
								break;
					}
					switch(line[1]){
							case '0':
								strcat(value, "");
								break;
							case '1':
								strcat(value, "-one");
								break;
							case '2':
								strcat(value, "-two");
								break;
							case '3':
								strcat(value, "-three");
								break;
							case '4':
								strcat(value, "-four");
								break;
							case '5':
								strcat(value, "-five");
								break;
							case '6':
								strcat(value, "-six");
								break;
							case '7':
								strcat(value, "-seven");
								break;
							case '8':
								strcat(value, "-eight");
								break;
							case '9':
								strcat(value, "-nine");
								break;
					}
			}
		}else{
				/* 2桁と3桁の数以外の場合 */
				if(result == 100){
						// 100の場合
						strcat(value, "hundred");
				}else{
					switch(line[0]){
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
		}
		printf("%s\n", value);
		return(0);
}
