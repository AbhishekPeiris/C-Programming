#include <stdio.h>
int main(){
	
	int N_1_to_10;
	int N_10_to_20;
	int N_20_to_30;
	int N_30_to_40;
	int N_40_to_50;
	
	for(N_1_to_10=1 ; N_1_to_10<11 ; ++N_1_to_10){
		printf("%d " , N_1_to_10);
	}
	printf("\n");
	
	for(N_10_to_20=11 ; N_10_to_20<21 ; ++N_10_to_20){
		printf("%d " , N_10_to_20);
	}
	printf("\n");
	
	for(N_20_to_30=21 ; N_20_to_30<31 ; ++N_20_to_30){
		printf("%d " , N_20_to_30);
	}
	printf("\n");
	
	for(N_30_to_40=31 ; N_30_to_40<41 ; ++N_30_to_40){
		printf("%d " , N_30_to_40);
	}
	printf("\n");
	
	for(N_40_to_50=41 ; N_40_to_50<51 ; ++N_40_to_50){
		printf("%d " , N_40_to_50);
	}
	printf("\n");
	return 0;
}
