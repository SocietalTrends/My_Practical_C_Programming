#include<stdio.h>
#include<stdlib.h>
char *s = "唐澤貴洋食す";
int main(){
		for(int i=0; i<6; i++){
				printf("%.3s\n", s+(3*(rand()%6)));
		}
}
