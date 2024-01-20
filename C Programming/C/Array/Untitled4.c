#include <stdio.h>
int main(){
	
	int num1;
	
	printf("Enter the number (0 - 5) : ");
	scanf("%d" , &num1);
	
	switch(num1){
		
		case 1 : 
		  printf("number is 1");
		  break;
		
		case 2 :
		   printf("number is 2");
		   break;
		   
		case 3 :
		   printf("number is 3");
		   break; 
		
		case 4 :
		   printf("number is 4");
		   break; 
		
		default :
		    printf("The number is invalid");
		
	}
	return 0;
	
}