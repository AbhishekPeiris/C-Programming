#include <stdio.h>
int main(void){
	
	char string1[] = "First";
	
	printf("%s\n" , string1);
	
	//---------------------------
	
	char string2[] = {'F','i','r','s','t','\0'};
	
	printf("%s\n" , string2);
	
	//---------------------------
	
	char string3[5];
	
	printf("Input string : ");
	scanf("%s" , &string3);
	
	printf("%17s\n" , string3);
	
	return 0;
}