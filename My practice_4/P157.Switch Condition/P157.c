#include <stdio.h>
int main(){
	
	int Number;
	
	printf("....Ministry of Education Student Loan 2022....\n\n");
	
	printf("UGC Recognized Universities\n");
	printf("  ^\n");
	printf("  .\n");
	printf("  .\n");
	printf("  .\n");
	printf("  .\n");
	printf("  .\n\n");
	
	printf("<---- Choose your 1st choice campus ---->\n\n");
	
	while(1){
		
		printf("1. SLIIT\n");
		printf("2. NSMB\n");
		printf("3. SLTC\n");
		printf("4. CINEC\n");
		printf("5. KIU\n");
		printf("6. Horizan\n");
		printf("7. Exit / No\n\n");
		
		printf("Choose your campus Number : ");
		scanf(" %d" , &Number);
		
		printf(".....................\n");
		
		switch(Number){
			
			case 1:{
				printf("The campus you choose is SLIIT\n");
				printf("* We will let you know soon\n");
				printf(".....Have a Nice Day!.....\n");
				
				printf("................................\n");
				
				printf("Mention your next choice if you want\n\n");
				break;
			}
			case 2:{
				printf("The campus you choose is NSBM\n");
				printf("* We will let you know soon\n");
				printf(".....Have a Nice Day!.....\n");
				
				printf("................................\n");
				
				printf("Mention your next choice if you want\n\n");
				break;
			}
			case 3:{
				printf("The campus you choose is SLTC\n");
				printf("* We will let you know soon\n");
				printf(".....Have a Nice Day!.....\n");
				
				printf("................................\n");
				
				printf("Mention your next choice if you want\n\n");
				break;
			}
			case 4:{
				printf("The campus you choose is CINEC\n");
				printf("* We will let you know soon\n");
				printf(".....Have a Nice Day!.....\n");
				
				printf("................................\n");
				
				printf("Mention your next choice if you want\n\n");
				break;
			}
			case 5:{
				printf("The campus you choose is KIU\n");
				printf("* We will let you know soon\n");
				printf(".....Have a Nice Day!.....\n");
				
				printf("................................\n");
				
				printf("Mention your next choice if you want\n\n");
				break;
			}case 6:{
				printf("The campus you choose is Horizan\n");
				printf("* We will let you know soon\n");
				printf(".....Have a Nice Day!.....\n");
				
				printf("................................\n");
				
				printf("Mention your next choice if you want\n\n");
				break;
			}
			case 7:{
				printf(".....Have a Nice Day!.....\n");
				
				return;
			}
		}
	}
}
