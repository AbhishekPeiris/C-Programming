#include <stdio.h>
int main(){
	
	int Number;
	char Grade;
	int Point_Number;
	
	printf("Enter Number : ");
	scanf(" %d" , &Number);
	
	if(Number >= 35){
		Grade = 'A';
		Point_Number = 1;
	}
	else{
		Grade = 'B';
		Point_Number = 0;
	}
	
	printf("Your Grade is %c\n" , Grade);
	printf("Your Point Number is %d" , Point_Number);
	
	return 0;
	
}
