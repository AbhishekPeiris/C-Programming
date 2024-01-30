#include <stdio.h>
int main(){
	
	int m;
	
	printf("Enter the Number(between 1 to 5) : ");
	scanf(" %d" , &m);
	
	switch(m){
		
		case 1:{
			printf("The Number is %d" , 1);
			break;
		}
		case 2:{
			printf("The Number is %d" , 2);
			break;
		}
		case 3:{
			printf("The Number is %d" , 3);
			break;
		}
		case 4:{
			printf("The Number is %d" , 4);
			break;
		}
		case 5:{
			printf("The Number is %d" , 5);
			break;
		}
		default:{
			printf("The Number is Invalid");
			break;
		}
	}
	return 0;
}
