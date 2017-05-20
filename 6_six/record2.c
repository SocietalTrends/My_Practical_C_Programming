/* 数値で指定された成績を、文字で表して出力してください */
/* また正解率の1の位に基づいて+か-をつけて出力するようにしてください */
#include<stdio.h>
#include<string.h>

char value[100];
int percent; /* 正解% */
char record[2];
char *min[1];	//マイナス記号
char *plu[1];	//プラス記号

int main(){
		/* strcpy関数の仕様をもう一度確認すること */
		/* 特にポインタ関係 */
		*min = "-";
		*plu = "+";
		printf("Enter your score.\n");
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%d", &percent);
		if(percent <= 60){
				strcpy(record, "F");
		}else if(percent <= 70){
				strcpy(record, "D");
				if(percent <= 63){
						strcat(record,*min);
				}else if(percent <= 67){

				}else if(percent <= 70){
						strcat(record,*plu);
				}		
		}else if(percent <= 80){
				strcpy(record, "C");
				if(percent <= 73){
						strcat(record,*min);
				}else if(percent <= 77){

				}else if(percent <= 80){
						strcat(record,*plu);
				}
		}else if(percent <= 90){
				strcpy(record, "B");
				if(percent <= 83){
						strcat(record,*min);
				}else if(percent <= 87){

				}else if(percent <= 90){
						strcat(record,*plu);
				}
		}else if(percent <= 100){
				strcpy(record, "A");
				if(percent <= 93){
						strcat(record,*min);
				}else if(percent <= 97){

				}else if(percent <= 100){
						strcat(record,*plu);
				}
		}else{
				printf("Please enter your correct score.\n");
				return(0);
		}
		printf("Your record is %s\n", record);
		return(0);
}
				

