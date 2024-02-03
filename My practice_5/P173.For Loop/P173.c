// Infinite for loop :
/*
  user can give many numbers. untill he given -1
*/
#include <stdio.h>
int main(){
	
	int x;
	
	for(;;){ // infinite for loop 
	   printf("Number : ");
	   scanf("%d" , &x);
	    
	   // check whether the number is -1 or not
	   
	   if(x == -1){
	   	break;
	   }
	}
	return 0;
}

