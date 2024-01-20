#include<stdio.h>
#define NEW_MAX 10
// constant value "NEW_MAX" that can use anywhere
int main(){
	int i=0;
	while(i<=NEW_MAX){
		printf("The value of i is =%d\n",i++);
	}
	printf("End of the program\n");
	return 0;
}
