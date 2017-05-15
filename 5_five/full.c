#include<string.h>
#include<stdio.h>
char first[100];		/*名	*/
char last[100];			/*姓	*/
char full_name[200];	/*名前  */
int main(){
		strcpy(first, "Steve"); 	/*名を初期化*/
		strcpy(last, "Oualline");	/*姓を初期化*/
		strcpy(full_name, first);	/*名前 = "Steve"*/
		strcat(full_name, " ");		/*名前 = "Steve "*/
		strcat(full_name, last);	/*名前 = "Steve Oualline"*/
		printf("The full name is %s\n", full_name);
		return(0);
}
