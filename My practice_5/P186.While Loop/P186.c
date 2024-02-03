#include <stdio.h>
int main(){
	
	int Number , sum;
	sum=0;
	
	while(1){ // infinite while loop
		
		printf("Enter a Number : ");
	    scanf(" %d" , &Number);
	    
	    if(Number==0){
	    	break;
		}
		else{
			sum+=Number;
			
			printf("\n********************\n");
		}
	
	}
	printf("The sum value for all the numbers is : %d\n" , sum);
	
	
	return 0;
}