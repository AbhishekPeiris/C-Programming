/*
	Copyright@ Lalindu Lokuliyana
*/
#include <stdio.h>
 
int main () {
	int x;
	printf("Enter a Number:");
	scanf("%d",&x);
	
	printf("The Address of x is %x\n",&x);
	
	//getch(x);
	if(x<20){
		printf("Less than 20\n");
		printf("hi");
	}else{
		printf("Grater than 20");
	}
}
