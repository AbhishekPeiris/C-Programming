#include <stdio.h>
#define pi 3.14

double VolumeOfCone(double radius , double height);
double VolumeOfCylinder(double radius , double height);

int main(void){
	
	double radius , height = 200.0;
	
	printf("Radius\t\tVolume of Cone\t\tVolume of Cylinder\n\n");
	
	for(radius=50 ; radius<=150 ; radius+=10){
		
		printf("%.f\t\t%.2f\t\t%.2f\n" , radius , VolumeOfCone(radius,height) , VolumeOfCylinder(radius,height));
	}
	
	return 0;
}
double VolumeOfCone(double radius , double height){
	
	double vol_cone;
	
	vol_cone = 1/3.0*pi*radius*radius*height;
	
	return vol_cone;
}
double VolumeOfCylinder(double radius , double height){
	
	double vol_cylinder;
	
	vol_cylinder = pi*radius*radius*height;
	
	return vol_cylinder;
}