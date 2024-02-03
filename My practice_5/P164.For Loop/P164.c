#include <stdio.h>
int main(){
	
	int Number , Count , Mul;
	
	printf("Enter a Number(less tha 50) : ");
	scanf(" %d" , &Number);
	
	for(Count=50 ; Count>=Number ; --Count){
		
		Mul *= Count;
		
		printf("Mul = %d\n" , Mul);
	}
	
	return 0;
}
