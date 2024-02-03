// User can give many numbers. Untill he give -1, get sum of all the numbers

#include <stdio.h>
int main(){
	
	int x , sum=0;
	
	while(1){ // infinite while loop
	    
	    printf("Number: ");
	    scanf("%d" , &x);
	    
	    // Check whether the number is -1 or not
	    
	    if (x==-1){
	    	break;
		}
		sum = sum+x;
		printf("\n-------------------------------\n");
	}
	printf("The sum value for all the numbers is : %d\n" , sum);
	
	return 0;
}