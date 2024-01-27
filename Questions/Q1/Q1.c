#include <stdio.h>
int main(){
	
	int Number;
	int Number_h , Number_min , Number_s; 
	
	while(1){
		
	 printf("Enter the number of seconds : ");
	 scanf(" %d" , &Number);
	
	
	 if(Number>0 && Number<60){
		 Number_s = Number/1; 
		 printf("Time : %d s = %d s\n\n\n" , Number , Number_s);
	 }
	 else if(Number>=60 && Number<3600){
		 Number_min = Number/60;
		 Number_s   = Number - (Number_min*60);
		if(Number_s==0){
			printf("Time : %d s = %d min\n\n\n" , Number , Number_min);
		}
		else{
			printf("Time : %d s = %d min %d s\n\n\n" , Number , Number_min , Number_s);
		} 	    
	 }
	 else if(Number>= 3600){
		 Number_h   = Number/3600;
		 Number_min = (Number-(Number_h*3600))/60;
		 Number_s   = (Number-(Number_h*3600))-(Number_min*60);
		if(Number_min==0){
			printf("Time : %d s = %d h %d s\n\n\n" , Number , Number_h , Number_s);
		}
		else if(Number_s==0){
			printf("Time : %d s = %d h %d min\n\n\n" , Number , Number_h , Number_min);
		}
		else if(Number_min==0 && Number_s==0){
			printf("Time : %d s = %d h\n\n\n" , Number , Number_h);
		}
		else{
			printf("Time : %d s = %d h %d min %d s\n\n\n" , Number , Number_h , Number_min , Number_s);
		}  
	 }
   }
	
	return 0;
}
