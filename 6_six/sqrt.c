/* 2点間の距離の2乗を算出するプログラムを作成して下さい（次のステップとして、逆にこの2乗した値から実際の距離を算出するプログラムを作成してください。この問題には標準関数sqrtを使用します。 */

#include<stdio.h>
#include<math.h>

char mode[100];
char value[100];
float square;
float distance;
int main(){
		printf("Enter 'square' or 'root'\n");
		fgets(mode, sizeof(mode), stdin);
		if(mode[0] == 's'){
				printf("Enter distance.\n");
				fgets(value, sizeof(value), stdin);
				sscanf(value, "%f", &distance);
				square = distance * distance;
				printf("sqaure of this number is %f\n", square);
		}else{
				printf("Enter square\n");
				fgets(value, sizeof(value), stdin);
				sscanf(value, "%f", &square);
				distance = sqrt(square);
				printf("distance is %f\n", distance);
		}
		return(0);
}
