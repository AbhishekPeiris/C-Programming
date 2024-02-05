#include <stdio.h>
#include <string.h>
#define SIZE 20

int main(void){
	
	char name[] = "My name is Abhishek";
	char re_name[SIZE];
	
	strcpy(re_name,name);
	
	printf("What is your name:\n* %s" , re_name);
	
	return 0;
}