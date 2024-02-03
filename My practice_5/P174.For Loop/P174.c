#include <stdio.h>
int main(){
	
	int Number;
	
	printf("```Guess the Number```\n\n");
	printf("Numbers : 1 , 34 , 67 , 89 , 45\n");
	printf("................................\n\n");
	
	for(;;){
		printf("Enter your Number : ");
	    scanf(" %d" , &Number);
	    
	    if(Number == 67){
	    	printf("The number you guessed is correct\n\n");
	    	break;
		}
		else{
			printf("The number you guessed is wrong\n\n");
		}
	}
	return 0;
}
