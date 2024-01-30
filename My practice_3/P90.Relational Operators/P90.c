#include <stdio.h>
int main(){
	
	int x=10 , y=12 , z=y;
	
	printf("%d == %d --> %d\n" , x , y , x == y);//0
	printf("%d == %d --> %d\n" , x , z , x == z);//0
	printf("%d == %d --> %d\n" , y , z , y == z);//1
	
	printf("\n_________________\n");
	
	printf("%d != %d --> %d\n" , x , y , x != y);//1
	printf("%d != %d --> %d\n" , x , z , x != z);//1
	printf("%d != %d --> %d\n" , y , z , y != z);//0
	
	printf("\n_________________\n");
	
	printf("%d > %d --> %d\n" , x , y , x > y);//0
	printf("%d > %d --> %d\n" , x , z , x > z);//0
	printf("%d > %d --> %d\n" , y , z , y > z);//0
	
	printf("\n_________________\n");
	
	printf("%d < %d --> %d\n" , x , y , x < y);//1
	printf("%d < %d --> %d\n" , x , z , x < z);//1
	printf("%d < %d --> %d\n" , y , z , y < z);//0
	
	printf("\n_________________\n");
	
	printf("%d >= %d --> %d\n" , x , y , x >= y);//0
	printf("%d >= %d --> %d\n" , x , z , x >= z);//0
	printf("%d >= %d --> %d\n" , y , z , y >= z);//1
	
	printf("\n_________________\n");
	
	printf("%d <= %d --> %d\n" , x , y , x <= y);//1
	printf("%d <= %d --> %d\n" , x , z , x <= z);//1
	printf("%d <= %d --> %d\n" , y , z , y <= z);//1
	
	printf("\n_________________\n");
	
	
	return 0;
	
	
}
	


