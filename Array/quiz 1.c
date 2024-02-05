#include <stdio.h>
int main(void){
	
	int num[3][3];
	int i,j,sum_1=0,sum_2=0,sum_3=0;
	float avg_1,avg_2,avg_3;
	
	printf("Student 1 scores\n");
	for(i=0 ; i<1 ; i++){
		
		for(j=0 ; j<=2 ; j++){
			
			printf("Score %d : " , j+1);
			scanf("%d" , &num[i][j]);
			
			sum_1 = sum_1+num[i][j];
		}
	}
	printf("\nStudent 2 scores\n");
	for(i=1 ; i<2 ; i++){
		
		for(j=0 ; j<=2 ; j++){
			
			printf("Score %d : " , j+1);
			scanf("%d" , &num[i][j]);
			
			sum_2 = sum_2+num[i][j];
		}
	}
	printf("\nStudent 1 scores\n");
	for(i=2 ; i<3 ; i++){
		
		for(j=0 ; j<=2 ; j++){
			
			printf("Score %d : " , j+1);
			scanf("%d" , &num[i][j]);
			
			sum_3 = sum_3+num[i][j];
		}
	}
	avg_1 = sum_1/3.0;
	avg_2 = sum_2/3.0;
	avg_3 = sum_3/3.0;
	
	printf("\n\nStudent No\tExam Scores\tAverage\n");
	
	for(i=0 ; i<=2 ; i++){
		
		printf("%d\t\t" , i+1);
		
		for(j=0 ; j<=2 ; j++){
			
			printf("%d " , num[i][j]);
		}
		if(i==0){
		
			printf("\t%.2f" , avg_1);
			printf("\n");
		}
		else if(i==1){
		
			printf("\t%.2f" , avg_2);
			printf("\n");
		}
		else if(i==2){
		
			printf("\t%.2f" , avg_3);
			printf("\n");
		}
	}
	
	return 0;
}