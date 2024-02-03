#include <stdio.h>
int main(){
	
	int a;
	
	printf("Enter a value : ");
	scanf(" %d" , &a);
	
	if(a<=50){
		do{
			printf("Number : %d\n" , a);
			a += 1;
		}
		while(a<=50);
	}
	else{
		do{
			printf("Number : %d\n" , a);
			a -= 1;
		}
		while(a>=50);
	}
	return 0;
}