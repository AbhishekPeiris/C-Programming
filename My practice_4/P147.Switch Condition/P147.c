#include <stdio.h>
int main(){
	
	int m;
	
	printf("Enter the Number(between 1 to 5) : ");
	scanf(" %d" , &m);
	
	switch(m){
		
		case 1:{
			printf("The Number is %d" , m);
			break;
		}
		case 2:{
			printf("The Number is %d" , m);
			break;
		}
		case 3:{
			printf("The Number is %d" , m);
			break;
		}
		case 4:{
			printf("The Number is %d" , m);
			break;
		}
		case 5:{
			printf("The Number is %d" , m);
			break;
		}
		default:{
			printf("The Number is Invalid");
			break;
		}
	}
	return 0;
}
