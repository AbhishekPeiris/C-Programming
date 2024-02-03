/*
  mehi number sadhaha yoda ganna agaya -1,0,1,2,5,10 yana 
  ilakkam sadhaha wadasathana nawathana akaraytath ,
  anitha ilakkam sadhaha ewaye ekathuwa labaganna akarayatath,
  sakasanna.
*/

#include <stdio.h>
int main(){
	
	int Number , sum;
	sum=0;
	
	printf("-1,0,1,2,5,10\n\n");
	
	while(1){ // infinite while loop
		
		printf("Enter a Number : ");
	    scanf(" %d" , &Number);
	    
	    if(Number==-1){
	    	break;
		}
		else if(Number==0){
			break;
		}
		else if(Number==1){
			break;
		}
		else if(Number==2){
			break;
		}
		else if(Number==5){
			break;
		}
		else if(Number==10){
			break;
		}
		else{
			sum+=Number;
			
			printf("\n********************\n");
		}
	
	}
	printf("The sum value for all the numbers is : %d\n" , sum);
	
	
	return 0;
}