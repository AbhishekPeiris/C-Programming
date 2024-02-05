#include <stdio.h>
#define SIZE 5

void modifyArray(int b[] , int j);

int main(void){
	
	int a[SIZE],i;
	
	for(i=0 ; i<SIZE ; i++){
		
		printf("Input the value %d : " , i+1);
		scanf("%d" , &a[i]);
	}
	
	printf("Original Arra : ");
	
	for(i=0 ; i<SIZE ; i++){
		
		printf("%d " , a[i]);
	}
	
	modifyArray(a,SIZE);
	
	return 0;

}
void modifyArray(int b[] , int j){
	
	printf("\nModified Array : ");
	
	for(j=0 ; j<SIZE ; j++){
		
		b[j]*=b[j];
		
		printf("%d " , b[j]);
	}
}