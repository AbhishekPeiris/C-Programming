#include  <stdio.h>
int main(){
	
	printf("             Notice\n\n");
	printf("       Cleaning Campaign\n");
	printf("  Date : Sunday the 25th of May\n");
	printf("  Time : From 8 a.m. to 11 a.m.\n");
	printf(" Place : Bingiriya Maha Vidyalaya\n");
	printf("We invite all the students and parents.\n");
	printf("Please bring garden tools to clean the school.\n\n");
	printf("  12.05.2019           Eco Friend's Club\n\n\n");
	
	char A[]="cleaning campaign";
	char B[]="sunday";
	int  C1=8;
	int  C2=11;
	char D[]="bingiriyama maha vidyalaya";
	char E[]="eco friends' club";
	
	printf("1) The notice is about a %s\n" , A);
	printf("2) The date is %s the 25th of May\n" , B);
	printf("3) The time is from %d a.m to %d a.m\n" , C1 , C2); //*******
	printf("4) It is at %s\n" , D);
	printf("5) %s organized it\n" , E);
	
	
    return 0;
		
	
}
