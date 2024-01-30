#include <stdio.h>
int main(){
	
	int Number;
	char Grade;
	
	
	while(1){
	
	
	 printf("Enter Number : ");
	 scanf(" %d" , &Number);
	
	 if(Number >= 0){
		Grade = 'Y';
		
	 }
	 else{
		Grade = 'N';
		return 0;
	 }   
	
	
	
    }
}
