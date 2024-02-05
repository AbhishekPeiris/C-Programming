#include <stdio.h>
int main(void){
	
	int myArr[5];
	int i,count = 10;
	
	for(i=0 ; i<5 ; i++){
		
		printf("Input the value : ");
		scanf("%d" , &myArr[i]);
		
		myArr[i] = myArr[i] + count;
		count+=10;
	}
	printf("\nElement\t\tValue\n");
	
	for(i=0 ; i<5 ; i++){
		
		printf("%d\t\t%d\n" , i,myArr[i]);
		
	}
	return 0;
}