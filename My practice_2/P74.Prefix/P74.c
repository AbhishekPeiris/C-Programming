#include <stdio.h>
int main(){
	
	int X = 20;
	
	printf("(1)--> X = %d\n" , X);//20
	
	--X;
	
	printf("(2)--> X = %d\n" , X);//19
	printf("(3)--> X = %d\n" , X--);//19
	printf("(4)--> X = %d\n" , X);//18
	
	printf("(5)--> X = %d\n" , X--);//18
	printf("(6)--> X = %d\n" , X--);//17
	printf("(7)--> X = %d\n" , X);//16
	
	printf("(8)--> X = %d\n" , --X);//15
	printf("(9)--> X = %d\n" , X);//15
	
	printf("(10)--> X = %d\n" , --X);//14
	printf("(11)--> X = %d\n" , --X);//13
	printf("(12)--> X = %d\n" , X);//13
	

	return 0;
	
}
