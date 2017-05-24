/* 指定された料金に5%の消費税を加算し、その結果を1円単位に丸める（小数点以下を四捨五入するプログラムを作成してください。 */
#include<stdio.h>
#include<math.h>
char value[100];
double beforetax;
double aftertax;
double const tax = 1.05;
/*
   0.5を足し、小数点以下を切り捨てる四捨五入の関数 
   負の場合は、絶対値に0.5を足したものにマイナス1をかけて実現 
double round_d(double x){
		if(x > 0.0){
				return floor(x + 0.5);
		}else{
				return -1.0 * floor(fabs(x) + 0.5);
		}
}
*/

int main(void){
		printf("Enter a price:\n");
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%lf", &beforetax);
		aftertax = round(beforetax * tax); // round関数を使用した場合
		// aftertax = round_d(beforetax * tax);
		printf("The price after tax is %lf.\n", aftertax);
		return(0);
}
