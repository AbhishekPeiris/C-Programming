#include <stdio.h>
int main(){
	
	int A , B;
		
	printf("Enter A Value := ");
	scanf(" %d" , &A);
	
	printf("Enter B Value := ");
	scanf(" %d" , &B);
	
	switch(A + B){
		
		case 10:{
			printf("A + B eqauls to 10\n");
			printf("A value equals to %d and B value equals to %d\n" , A , B);
			break;
	    }
	    case 20:{
	    	printf("A + B eqauls to 20\n");
			printf("A value equals to %d and B value equals to %d\n" , A , B);
			break;
		}
		default:{
			printf("(A + B) != 10 and (A + B) != 20\n");
			printf("A value equals to %d and B value equals to %d\n" , A , B);
			break;
		}
		
	}
	return 0;
}
