#include <stdio.h>
int main(){
	
	int Point_Number;
	int Number;
	 
	
		
		printf(".........Our Degrees........\n\n");
		
		printf("1. BSc(Hons) Cyber Security[Point_Number --> 9]\n");
		printf("2. BSc(Hons) Software Engneering[Point_Number --> 8]\n");
		printf("3. BSc(Hons) Data Science[Point_Number --> 7]\n");
		printf("5. BSc(Hons) Network Engneering[Point_Number --> 6]\n");
		printf("4. BSc(Hons) Computer System Engneering[Point_Number --> 5]\n");
		printf("6. BSc(Hons) Intractive Media[Point_Number --> 5]\n");
		printf("7. Exit the Degree Program\n");
		
		printf("......................\n");
		
		printf("Enter your Point_Number (9 or 8 or 7 or 6 or 5) : ");
		scanf(" %d" , &Point_Number);
		
		printf("......................\n");
		
		// switch ekata damiya hakke inter type variable ekak pamani
		
		switch(Point_Number){
			
			case 9:{
				printf("Your Degree Programm is BSc(Hons) Cyber Security\n");
				break;
			}
			case 8:{
				printf("Your Degree Programm is BSc(Hons) Software Engneering\n");
				break;
			}
			case 7:{
				printf("Your Degree Programm is BSc(Hons) Data Science\n");
				break;
			}
			case 6:{
				printf("Your Degree Programm is BSc(Hons) Network Engneering\n");
				break;
			}
			case 5:{
				printf("Your Degree Programm is BSc(Hons) Computer System Engneering\n");
				printf("or\n");
				printf("Your Degree Programm is BSc(Hons) Intractive Media\n");
				break;
			}
	
			
		
	
	}
}
