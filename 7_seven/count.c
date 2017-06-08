/* いくつかの数値が指定された時、正の数がいくつあり負の数がいくつあるのかを数えるプログラムを作成して下さい */
#include<stdio.h>
char line[100];
int num;
char ope;
int minus_count;
int plus_count;
int main(){
		minus_count = 0;
		plus_count = 0;
		while(1){
				printf("Enter a number:(ex. to exit \"2 q\")\n");
				fgets(line, sizeof(line), stdin);
				sscanf(line, "%d %c", &num, &ope);
				if(ope == 'q'){
						break;
				}
				if(num < 0){
						minus_count++;
				}else{
						plus_count++;
				}
		}
		printf("the count of a positive number is %d and that of a negative number is %d.\n", plus_count, minus_count);
		return(0);
}
