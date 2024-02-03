#include <stdio.h>
#include <stdbool.h>

int main(){
	
    int Number;
	bool T=true; // --> 1
	bool F=false;// --> 0
	
	
	printf("Eneter the Number ");
	scanf(" %d" , &Number);
	
	if(Number==0){
		printf("The Number is %d" , T);
	}
	else{
		printf("The Number is %d" , F);
	}
	return 0;
}