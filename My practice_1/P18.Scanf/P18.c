#include <stdio.h>
int main(){
	
	int a;
	
	printf("Enter a variable value ");
	scanf("%d" , &a);
	
	printf("\n<><><><><><><><><><><><><><><><><><>\n");
	
	printf("The address of a variable %d" , &a);
	
	printf("\n<><><><><><><><><><><><><><><><><><>\n");
	
	float b;
	
	printf("Enter b variable value ");
	scanf("%f" , &b);
	
	printf("\n<><><><><><><><><><><><><><><><><><>\n");
	
	printf("The address of b variable %d" , &b);
	
	printf("\n<><><><><><><><><><><><><><><><><><>\n");
	
	return 0;
}
