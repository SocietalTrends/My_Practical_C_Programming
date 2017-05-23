/* 従業員の1週間の労働時間と時間給を指定し、その週の賃金を算出するプログラムを作成して下さい。40時間を超えた労働時間は残業時間として1.5倍に勘定します。 */
#include<stdio.h>
char value[100];
float hour;
float wage;
float payment;
int main(void){
		printf("Enter wages and labour hours in this week.(ex: w l)\n");
		fgets(value, sizeof(value), stdin);
		sscanf(value, "%f %f", &wage, &hour);
		if(hour - 40.0 > 0.0){
				payment = wage * 40.0;
				hour = 1.5 * (hour - 40.0);
				payment += wage * hour;
		}else{
				payment = wage * hour;
		}
		printf("The payment in this week is %f.\n", payment);
		return(0);
}
