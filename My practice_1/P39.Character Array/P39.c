#include <stdio.h>
int main(){
	
	char nm1[10] = {'A','B','H','I'};
	char nm2[10] = "Abhishek";
	
	printf("Size of array is %d\n" , &nm1);
	printf("Size of array is %d\n" , &nm2);
	
	return 0;
}
