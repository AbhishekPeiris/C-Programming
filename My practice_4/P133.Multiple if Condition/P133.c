#include <stdio.h>
int main(){
	
	int mark;
	char grade;
	
	printf("Enter the marks := ");
	scanf(" %d" , &mark);
	// Multiple if
	if(mark  >= 75){ 
		grade = 'A';
	}
	else if(mark >= 65){ 
		grade = 'B';
	}
	else if(mark >= 55){ 
		grade = 'C';
	}
	else if(mark >= 35){ 
		grade = 'S';
	}
	else{
		grade = 'F'; 
	}
	
	printf("The Grade is %c for the Mark is %d" , grade , mark);
	
	return 0;
}
