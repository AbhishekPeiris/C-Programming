#include <stdio.h>
int main(){
	
	int mark;
	char grade;
	
	printf("Enter the marks := ");
	scanf(" %d" , &mark);
	
	system("cls");
	
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
	
	printf("\n********************************\n");
	printf("***                          ***\n");
	printf("***                          ***\n");
	
	printf("The Grade is %c for the Mark is %d\n" , grade , mark);
	
	printf("***                          ***\n");
	printf("***                          ***\n");
	printf("********************************\n");
	
	return 0;
}
