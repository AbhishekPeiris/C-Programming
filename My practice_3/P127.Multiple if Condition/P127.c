#include <stdio.h>
int main(){
	
	int Marks;
	char Grade[10];
	float Grade_Point;
	
	printf("..........Grade Point Matrix.........\n\n");
	
	printf("Enter your Marks :=  ");
	scanf(" %d" , &Marks);
	
	if(Marks >= 85){
		Grade[10] = 'A';
		
	}
	else if(Marks >= 80){
		Grade[10] = "A-";
		
	}
	else if(Marks >= 75){
		Grade[10] = "B+";
		
    }
    else if(Marks >= 70){
		Grade[10] = 'B';
		
    }
    else if(Marks >= 65){
		Grade[10] = "C+";
		
    }
    else if(Marks >= 60){
		Grade[10] = 'C';
		
    }
    else if(Marks >= 55){
		Grade[10] = "D+";
		
    }
    else if(Marks >= 50){
		Grade[10] = 'D';
		
    }
    else{ 
		Grade[10] = 'F';
		
    }
    
    printf("Your Grade is := %s\n" , Grade);
    
    
    return 0;
}
