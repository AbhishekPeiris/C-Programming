#include <stdio.h>
int main(){
	
	int m;
	char c;
	
	printf("Enter the Number ");
	scanf(" %d" , &m);
	
	if(m>100 || m<0){
		printf("The Given Number is not inValid range\n");
	}
	else{
		if(m >= 75){
			c = 'A';
		}
		else if(m >= 65){
			c = 'B';
		}
		else if(m >= 55){
			c = 'C';
		}
		else if(m >= 35){
			c = 'S';
		}
		else{
			c = 'F';
		}
		printf("The Grade is %c" , c);
	}
	return 0;
}
