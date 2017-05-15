#include <stdio.h>

float width; /* 横の長さ */
float height; /* 縦の長さ */
float area; /* 面積 */
float periphery; /*外周*/

int main(){
		width = 6.8*2.54;
		height = 2.3*2.54;
		area = width * height; /* 面積 */
		periphery = width*2 + height*2; /* 外周 */
		printf("an area is %f square centimeter and a periphery is %f centimeter\n", area, periphery);
		return(0);
}
