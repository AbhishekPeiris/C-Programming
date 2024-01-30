#include <stdio.h>
int main(){
	
	int A , B;
		
	printf("Enter A Value := ");
	scanf(" %d" , &A);
	
	printf("Enter B Value := ");
	scanf(" %d" , &B);
	
	int Number = A + B;
	
	switch(Number){
		
		case 100:{
			printf("A + B eqauls to 100\n");
			printf("A value equals to %d and B value equals to %d\n" , A , B);
			break;
	    }
	    case 150:{
	    	printf("A + B eqauls to 150\n");
			printf("A value equals to %d and B value equals to %d\n" , A , B);
			break;
		}
		default:{
			printf("(A + B) != 100 and (A + B) != 150\n");
			printf("A value equals to %d and B value equals to %d\n" , A , B);
			printf("According to the values you specified , (A + B) = %d" , Number);
			break;
		}
		
	}
	return 0;
}
