#include <stdio.h>
int main(){
	
	int no1,no2;
	
	printf("Enter your 1st number : ");
	scanf("%d" , &no1);
	
	printf("Enter your 2nd number : ");
	scanf("%d" , &no2);
	
	if(no1 == no2){
		printf("no1 equal to no2");
	}
	if(no1 != no2){
		printf("no1 not equal to no2");
	}
	
	return 0;
}