#include <stdio.h>
int main(){
	
	int x = 4+1;//5
	
	printf("(1)--> x = %d\n" , x);//5
	printf("(1)--> x variable address is %d\n" , &x);
	printf("(1)--> x variable address is %x\n" , &x);
	
	x = x+1;
	
	printf("(2)--> x = %d\n" , x);//6
	printf("(2)--> x variable address is %d\n" , &x);
	printf("(2)--> x variable address is %x\n" , &x);
	
	x = x+1;
	
	printf("(3)--> x = %d\n" , x);//7
	printf("(3)--> x variable address is %d\n" , &x);
	printf("(3)--> x variable address is %x\n" , &x);
	
	x = x+20;
	
	printf("(4)--> x = %d\n" , x);//27
	printf("(4)--> x variable address is %d\n" , &x);
	printf("(4)--> x variable address is %x\n" , &x);
	
	x = x+34.8;
	
	printf("(5)--> x = %d\n" , x);//61.8 - " 61 because of an integer "
	printf("(5)--> x variable address is %d\n" , &x);
	printf("(5)--> x variable address is %x\n" , &x);
	
	x = x+x;
	
	printf("(6)--> x = %d\n" , x);//122
	printf("(6)--> x variable address is %d\n" , &x);
	printf("(6)--> x variable address is %x\n" , &x);
	
	x = x+x+6;
	
	printf("(7)--> x = %d\n" , x);//250
	printf("(7)--> x variable address is %d\n" , &x);
	printf("(7)--> x variable address is %x\n" , &x);
	
	x = x+20+30;
	
	printf("(8)--> x = %d\n" , x);//300
	printf("(8)--> x variable address is %d\n" , &x);
	printf("(8)--> x variable address is %x\n" , &x);
	
	x = 8+2;//10 - " It is suggested to take x=10 now, whatever x was before "
	
	printf("(9)--> x = %d\n" , x);//10
	printf("(9)--> x variable address is %d\n" , &x);
	printf("(9)--> x variable address is %x\n" , &x);
	
	
	
	
	
	return 0;
}
