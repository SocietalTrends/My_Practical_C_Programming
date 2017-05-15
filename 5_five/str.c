#include <string.h>
#include <stdio.h>
char name[4];
char string[50];
int main(){
		strcpy(name, "Sam");
		strcpy(string, "Wataru Otoshiro");
		printf("%s and %s\n", name, string);
		return(0);
}
