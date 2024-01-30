#include <stdio.h>
int main(){
	
	int A = 5;
	int B;

	printf("Enter B Value : ");
	scanf(" %d" , &B);
	
	system("cls");
	
	printf("\n....................................\n");
	
	switch(A > B){
		
		case 1:{
			printf("B value less than A value\n");
			printf("B value is %d\n" , B);
			break;
		}
		case 2:{
			printf("B value less than A value\n");
			printf("B value is %d\n" , B);
			break;
		}
		case 3:{
			printf("B value less than A value\n");
			printf("B value is %d\n" , B);
			break;
		}
		case 4:{
			printf("B value less than A value\n");
			printf("B value is %d\n" , B);
			break;
		}
		case 5:{
			printf("B value less than A value\n");
			printf("B value is %d\n" , B);
			break;
	    }
	    default:{
	    	printf("B value grater than A value\n");
	    	printf("B value is %d\n" , B);
			break;
		}
	}
	return 0;
}
