#include<stdio.h>
#include<stdlib.h>
char *k[] = {"唐","澤","貴","洋","食","す"};
int main(){
		for(int i=0; i<6; i++){
				printf("%s", k[rand()%6]);
		}
}
