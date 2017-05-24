/* シリアルケーブルの転送速度は1秒間に960文字です。1つのファイルのサイズが指定された時、そのファイルの内容を転送するために要する時間を算出プログラムを作成して下さい。419430400バイトのファイルについて考えて下さい。 */
#include<stdio.h>
float hour;
int const speed = 960;
long int file;
int main(void){
		file = 419430400;
		hour = file / speed / 3600.0;
		printf("It takes %f hours.\n", hour);
		return(0);
}
