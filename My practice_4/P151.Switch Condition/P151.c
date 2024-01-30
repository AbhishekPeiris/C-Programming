#include <stdio.h>
int main(){
	
	int Number;
	
	printf("Enter the Number(Between 1 to 10) : ");
	scanf(" %d" , &Number);
	
	switch(Number){
		
		/*
		  case ek sadaha yodana number eka washayen salakiya yuththe
		  apa balaporothuwana agayai.
		  enam , apata 2 print weemata awashshya nam apa wenth number ekak
		  eduwath eya print nove. 2 apa athulath karana thak eya print nove.
		*/
		
		case 2:{
			printf("The Number is %d\n" , Number);
			break;
		}
		case 4:{
			printf("The Number is %d\n" , Number);
			break;
		}
		case 6:{
			printf("The Number is %d\n" , Number);
			break;
		}
		case 8:{
			printf("The Number is %d\n" , Number);
			break;
		}
		case 10:{
			printf("The Number is %d\n" , Number);
			break;
		}
		default:{
			printf("Only Even Numbers are Valid\n");
			break;
		}
	}
	return 0; 
}
