#include <stdio.h>
int main(){
	
	int m;
	char g;
	
	printf("Enter the Number : ");
	scanf(" %d" , &m);
	
	if(!(m>100 || m<0)){
		
		if(m >= 75){
			g = 'A';
		}
		else if(m >= 65){
			g = 'B';
		}
		else if(m >= 55){
			g = 'C';
		}
		else if(m >= 35){
			g = 'S';
		}
		else{
			g = 'F';
		}
		printf("The Grade is : %c\n" , g);	
	}
	else{
		printf("The Given Number is not in Valid range");
		
		
	}
	return 0;
}
