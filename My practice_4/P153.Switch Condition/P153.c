#include <stdio.h>
int main(){
	
	int m;
	
	printf("Enter the Number(Between 1 to 5) : ");
	scanf(" %d" , &m);
	
	switch(m){
		
		case 1:
		case 2:{
			printf("The Number is 1 or 2\n");
			break;
		}
		case 3:{
			printf("The Number is %d\n" , 3);
			break;
		}	
	    case 4:{
	    	printf("The Number is %d\n" , 4);
			break;
		}
		case 5:{
			printf("The Number is %d\n" , 5);
			break;
		}
		default:{
			printf("The Number is Invalid\n");
			break;
		}
	}
	return 0;   
}
