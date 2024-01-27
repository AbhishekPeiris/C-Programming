#include <stdio.h>
int main(){
	
	int lenth , width , paranthasi , area;
	
	printf("Enter lenth : ");
	scanf(" %d" , &lenth);
	
	printf("Enter width : ");
	scanf(" %d" , &width);
	
	area = lenth*width;
	paranthasi = lenth*2+width*2;
	
	printf("Area is : %d\n" , area);
	printf("Paranthasi is :%d" , paranthasi);
	
	
	return 0;
}