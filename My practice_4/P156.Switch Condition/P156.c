#include <stdio.h>
int main(){
	
	int Number;
	
	while(1){
		
		printf(".........Our Degrees........\n\n");
		
		printf("Choose your Degree\n");
		printf("......................\n");
		
		printf("1. BSc(Hons) Cyber Security\n");
		printf("2. BSc(Hons) Software Engneering\n");
		printf("3. BSc(Hons) Data Science\n");
		printf("4. BSc(Hons) Computer System Engneering\n");
		printf("5. BSc(Hons) Network Engneering\n");
		printf("6. BSc(Hons) Intractive Media\n");
		printf("7. Exit the Degree Program\n");
		
		printf("......................\n");
		
		printf("Choose Your Degree Program Number : ");
		scanf(" %d" , &Number);
		
		printf("......................\n");
		
		switch(Number){
			
			case 1:{
				printf("Your Degree Programm is BSc(Hons) Cyber Security\n");
				break;
			}
			case 2:{
				printf("Your Degree Programm is BSc(Hons) Software Engneering\n");
				break;
			}
			case 3:{
				printf("Your Degree Programm is BSc(Hons) Data Science\n");
				break;
			}
			case 4:{
				printf("Your Degree Programm is BSc(Hons) Computer System Engneering\n");
				break;
			}
			case 5:{
				printf("Your Degree Programm is BSc(Hons) Network Engneering\n");
				break;
			}
			case 6:{
				printf("Your Degree Programm is BSc(Hons) Intractive Media\n");
				break;
			}
			case 7:{
				printf("Have a Nice Day!\n");
				return 0;
			}
		}
	}
}
