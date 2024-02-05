#include <stdio.h>

int main(void){
	
	int num[2][3];
	int i,j;
	
	for(i=0 ; i<=1 ; ++i){
		
		for(j=0 ; j<=2 ; ++j){
			
			printf("num[%d][%d] : " , i+1,j+1);
			scanf("%d" , &num[i][j]);
		}
	}
	for(i=0 ; i<=1 ; ++i){
		
		for(j=0 ; j<=2 ; ++j){
			
			printf("%d " , num[i][j]);
		}
	}
	return 0;
	
}
