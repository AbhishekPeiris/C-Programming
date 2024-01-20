/*
	Copyright@ Lalindu Lokuliyana
*/
#include<stdio.h>
#define NEW_MAX 10
// constant value "NEW_MAX" that can use anywhere
int main(){
	//constant inside main function
	const MAX=10;
	int i;
	for(i=0;i<NEW_MAX;i++){
		printf("The value of i is =%d\n",i);
	}
	printf("\n*********************\n");
	for(i=0;i<MAX;i++){
		printf("The value of i is =%d\n",i);
	}
}
