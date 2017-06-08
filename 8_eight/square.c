/* マス目（縦８升横８升）を出力して下さい。１つの升目は縦３文字、横５文字文の大きさにしてください。*/
#include<stdio.h>
#include<string.h>
char line1[14];
char line2[14];
int main(){
		int i;
		strcpy(line1,"+-----+-----+");
		strcpy(line2,"|     |     |");
		for(i=0; i<9; i++){
				if(i == 0 || i == 4 || i == 8){
						printf("%s\n",line1);
				}else{
						printf("%s\n",line2);
				}
		}
		return(0);
}
