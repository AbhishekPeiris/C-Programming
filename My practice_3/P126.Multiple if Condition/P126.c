#include <stdio.h>
int main(){
	
	int Marks;
	char Grade;
	
	printf(".....Information Technology (IT) Marks.....\n\n");
	
	printf("Enter the IT marks :) ");
	scanf(" %d" , &Marks);
	
	if(Marks >= 75){
		Grade = 'A';
	}
	else if(Marks >= 65){
		Grade = 'B';
	}
	else if(Marks >= 50){
		Grade = 'C';
	}
	else if(Marks >= 35){
		Grade = 'S';
	}
	else{
		Grade = 'F';
	}
	
	printf("Your IT Grade is :) %c" , Grade);
	
	return 0;
}
