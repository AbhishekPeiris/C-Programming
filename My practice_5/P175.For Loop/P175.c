// Infinite for loop :
/*
  user can give many numbers. untill he given -1, get sum of all the numbers
*/
#include <stdio.h>
int main(){
	
	int x , sum=0;
	
	for(;;){ // infinite for loop 
	   printf("Number : ");
	   scanf("%d" , &x);
	    
	   // check whether the number is -1 or not
	   
	   if(x == -1){
	   	break;
	   }
	   sum = sum + x;
	   printf("\n..........................\n");
	}
	printf("The sum value for all the numbers is : %d\n" , sum);
	return 0;
}

