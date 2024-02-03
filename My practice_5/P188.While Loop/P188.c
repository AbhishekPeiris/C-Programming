// Find the valid letters

#include <stdio.h>
int main(){
	
	char Letter;
	
	printf("Invalid Letters :- A , B , C , D\n\n");
	
	while(1){
		
		printf("Enter the Letter :- ");
		scanf(" %c" , &Letter);
		
		if(Letter == 'A'){
			printf("Letter is Invalid\n\n");
		}
		else if(Letter == 'B'){
			printf("Letter is Invalid\n\n");
		}
		else if(Letter == 'C'){
			printf("Letter is Invalid\n\n");
	    }
	    else if(Letter == 'D'){
			printf("Letter is Invalid\n\n");
	    }
	    else{
	    	printf("Letter is Valid\n");
	    	break;
		}
	}
	return 0;
}