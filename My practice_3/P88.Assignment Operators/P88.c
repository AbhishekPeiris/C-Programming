#include <stdio.h>
int main(){
	
	int x = 5;
	int y;
	
	y = x;
	printf("y = %d\n" , y);//5
	printf("y = %d\n" , y++);//5
	printf("y = %d\n" , y);//6
	printf("y = %d\n" , y--);//6
	printf("y = %d\n" , y);//5
	printf("y = %d\n" , ++y);//6
	printf("y = %d\n" , y);//6
	printf("y = %d\n" , --y);//5
	printf("y = %d\n" , y);//5
	
	printf("********************\n");
	
	y += x;
	printf("y = %d\n" , y);//10
	printf("y = %d\n" , y++);//10
	printf("y = %d\n" , y);//11
	printf("y = %d\n" , y--);//11
	printf("y = %d\n" , y);//10
	printf("y = %d\n" , ++y);//11
	printf("y = %d\n" , y);//11
	printf("y = %d\n" , --y);//10
	printf("y = %d\n" , y);//10
	
	printf("********************\n");
	
	y -= x;
	printf("y = %d\n" , y);//5
	printf("y = %d\n" , y++);//5
	printf("y = %d\n" , y);//6
	printf("y = %d\n" , y--);//6
	printf("y = %d\n" , y);//5
	printf("y = %d\n" , ++y);//6
	printf("y = %d\n" , y);//6
	printf("y = %d\n" , --y);//5
	printf("y = %d\n" , y);//5
	
	printf("********************\n");
	
	y *= x;
	printf("y = %d\n" , y);//25
	printf("y = %d\n" , y++);//25
	printf("y = %d\n" , y);//26
	printf("y = %d\n" , y--);//26
	printf("y = %d\n" , y);//25
	printf("y = %d\n" , ++y);//26
	printf("y = %d\n" , y);//26
	printf("y = %d\n" , --y);//25
	printf("y = %d\n" , y);//25
	
	printf("********************\n");
	
	y /= x;
	printf("y = %d\n" , y);//5
	printf("y = %d\n" , y++);//5
	printf("y = %d\n" , y);//6
	printf("y = %d\n" , y--);//6
	printf("y = %d\n" , y);//5
	printf("y = %d\n" , ++y);//6
	printf("y = %d\n" , y);//6
	printf("y = %d\n" , --y);//5
	printf("y = %d\n" , y);//5
	
	printf("********************\n");
	
	y %= x;
	printf("y = %d\n" , y);//0
	printf("y = %d\n" , y++);//0
	printf("y = %d\n" , y);//1
	printf("y = %d\n" , y--);//1
	printf("y = %d\n" , y);//0
	printf("y = %d\n" , ++y);//1
	printf("y = %d\n" , y);//1
	printf("y = %d\n" , --y);//0
	printf("y = %d\n" , y);//0
	
	printf("********************\n");
	
	y += x;// y --> 5
	x++; // x --> 6
	y += x;// --> 11
	printf("y = %d\n" , y);//11
	
	return 0;
	
}
