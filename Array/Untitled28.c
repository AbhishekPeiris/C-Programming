#include <stdio.h>
#include <string.h>
#define SIZE 20

int main(void){
	
	char number[5] = {'A','B','C','D','E'};
	char re_number[SIZE],name[SIZE],add[SIZE];
	int i;
	
	strcpy(re_number,number);
	
	printf("Re number list : ");
	
	for(i=0 ; i<5 ; i++){
		
		printf("%c " , re_number[i]);
	} 
	
	strcpy(name,number);
	printf("\n");
	for(i=0 ; i<5 ; i++){
		
		printf("%c " , name[i]);
	} 
	
	strcpy(add,name);
		printf("\n");
	for(i=0 ; i<5 ; i++){
		
		printf("%c " , add[i]);
	} 
	return 0;
}