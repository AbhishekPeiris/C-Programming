#include <stdio.h>
int main(){
	
	int A , B;
	
	printf("Enter A value : ");
	scanf(" %d" , &A);
	
	printf("Enter B value : ");
	scanf(" %d" , &B);
	
	if(A != 10){
		printf("A value not equal to 10\n");
	} 
   else{
   	    printf("A value equal to 10\n" , A);
   }
   if(B < 10){
   	    printf("B Less than 10\n");
   }
   else{
   	    printf("B Grater than 10\n");
   }
   if(A > B){
   	    printf("A Grater than B\n");
   }
   else{
   	    printf("A Less than B\n");
   	    
   }return 0;
   
	
}
