#include <stdio.h>
int main(){
	
	int radius;
	int diameter;
	float circumference , area;
	
	printf("Enter the radius : ");
	scanf("%d" , &radius);
	
	diameter = radius*2;
	circumference = 2*(22/7.0)*radius;
	area = 22/7.0*radius*radius;
	
	printf("Diameter : %d\nCircumference : %.2f\nArea : %.2f" , diameter , circumference , area);
	
	return 0;
	
}