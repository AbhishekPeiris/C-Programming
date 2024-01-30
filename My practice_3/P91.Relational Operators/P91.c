#include <stdio.h>
int main(){
	
	float x=10.34 , y=12.456 , z=10.340;
	
	printf("%f == %f --> %d\n" , x , y , x == y);//0
	printf("%f == %f --> %d\n" , x , z , x == z);//1
	printf("%f == %f --> %d\n" , y , z , y == z);//0
	
	printf("\n_________________\n");
	
	printf("%f != %f --> %d\n" , x , y , x != y);//1
	printf("%f != %f --> %d\n" , x , z , x != z);//0
	printf("%f != %f --> %d\n" , y , z , y != z);//1
	
	printf("\n_________________\n");
	
	printf("%f > %f --> %d\n" , x , y , x > y);//0
	printf("%f > %f --> %d\n" , x , z , x > z);//0
	printf("%f > %f --> %d\n" , y , z , y > z);//1
	
	printf("\n_________________\n");
	
	printf("%f < %f --> %d\n" , x , y , x < y);//1
	printf("%f < %f --> %d\n" , x , z , x < z);//0
	printf("%f < %f --> %d\n" , y , z , y < z);//0
	
	printf("\n_________________\n");
	
	printf("%f >= %f --> %d\n" , x , y , x >= y);//0
	printf("%f >= %f --> %d\n" , x , z , x >= z);//1
	printf("%f >= %f --> %d\n" , y , z , y >= z);//1
	
	printf("\n_________________\n");
	
	printf("%f <= %f --> %d\n" , x , y , x <= y);//1
	printf("%f <= %f --> %d\n" , x , z , x <= z);//1
	printf("%f <= %f --> %d\n" , y , z , y <= z);//0
	
	printf("\n_________________\n");
	
	
	return 0;
	
	
}
	


