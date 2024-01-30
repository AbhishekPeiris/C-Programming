#include <stdio.h>
int main(){
	
	int Marks;
	char Grade;
	
	printf("Enter the Number : ");
	scanf(" %d" , &Marks);
	
	if(!(Marks<100 || Grade>0)){
		printf("The Given Number is not inValid range\n");
		
    }
	else{
		if(Marks >= 75){
			Grade = 'A';
		}
		else if(Marks >= 65){
			Grade = 'B';
		}
		else if(Marks >= 55){
			Grade = 'C';
		}
		else if(Marks >= 35){
			Grade = 'S';
		}
		else{
			Grade = 'F';
		}
		printf("The Grade is %c" , Grade);
		
	}
	return 0;
}
