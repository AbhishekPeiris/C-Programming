#include <stdio.h>
int main(){
	
	int x = 5 , y = 10;
	float z = 15.5;
	
	++x;//6
	++y;//11
	++z;//16.5
	
	printf("(1)--> x = %d\n" , x);//6
	printf("(2)--> x = %d\n" , ++x);//7
	
	++x;//8
    ++y;//12
    
    printf("(3)--> x = %d\n" , x);//8
    printf("(4)--> x = %d\n" , --x);//7
    printf("(5)--> y = %d\n" , y);//12
    printf("(6)--> z = %.2f\n" , z);//16.5
    
    --z;//15.5
    --x;//6
    --y;//11
    
    printf("(7)--> x = %d\n" , x);//6
    printf("(8)--> z = %.2f\n" , --z);//14.5
    printf("(9)--> x = %d\n" , x++);//6 --> 7
    printf("(10)--> y = %d\n" , ++y);//12
	
	return 0;
}
