#include <stdio.h>
int main(){
	
	int x;
	
	printf("Enter x value ");
	scanf("%d" , &x);
	
	printf("The x variable size is %d\n" , sizeof(x));
	
	printf("\n..............................................\n");
	
	float y;
	
	printf("Enter y value ");
	scanf("%f" , &y);
	
	printf("The y variable size is %d" , sizeof(y));
	
    printf("\n..............................................\n");
    
    double z;

    printf("Enter z value ");
	scanf("%f" , &z);
	
	printf("The z variable size is %d" , sizeof(z));
	
    printf("\n..............................................\n");
	
	
	return 0;
	
}
