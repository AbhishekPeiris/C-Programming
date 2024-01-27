#include <stdio.h>
int main(){
	
	int x = 4*1;//4
	
	printf("(1)--> x = %d\n" , x);//4
	
	x = x*1;
	
	printf("(2)--> x = %d\n" , x);//4
	
	x = x*2;
	
	printf("(3)--> x = %d\n" , x);//8
	
	x = x*3;
	
	printf("(4)--> x = %d\n" , x);//24
	
	x = x*5;
	
	printf("(5)--> x = %d\n" , x);//120  
	
	x = x*x;
	
	printf("(6)--> x = %d\n" , x);//14400
	
	x = x*x*6;
	
	printf("(7)--> x = %d\n" , x);
	
	x = x*20*30;
	
	printf("(8)--> x = %d\n" , x);
	
	x = 8*2;
	
	printf("(9)--> x = %d\n" , x);//16
	
	x = x*0.5;
	
	printf("(10)--> x = %d\n" , x);//8 - " 0 because of an integre "
	
	x = x*1.5;
	
	printf("(10)--> x = %d\n" , x);//12 
	
	x = x*0.3;
	
	printf("(11)--> x = %d\n" , x);//3.6 - " 3 because of an integre "
	
	
	
	
	
	return 0;
}
