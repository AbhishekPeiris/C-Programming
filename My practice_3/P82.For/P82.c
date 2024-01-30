// for

#include <stdio.h>
int main(){
	
	int x;
	
	for (x=0;x<10;x++){
        printf("x value is = %d\n" , x);}
        
	printf("\n**********************************\n");
	
	for (x=0;x<10;++x){
        printf("x value is = %d\n" , x);}
        
	printf("\n**********************************\n");
	
	for (x=0;x>-10;x--){
        printf("x value is = %d\n" , x);}
        
	printf("\n**********************************\n");
	
	for (x=0;x>-10;--x){
        printf("x value is = %d\n" , x);}
        
	printf("\n**********************************\n");
	
	for (x=8;x<12;x++){
        printf("x value is = %d\n" , x);}
        
	printf("\n**********************************\n");
	
	for (x=2;x<=10;x++){  // x kuda ho samana <= melesa niruupanaya karai
        printf("x value is = %d\n" , x);} 
        
	printf("\n**********************************\n");
	
	for (x=10;x>=0;x--){  // x wishala ho samana >= melesa niruupanaya karai
        printf("x value is = %d\n" , x);}
        
	printf("\n**********************************\n");
	
		
    return 0; 
	
	
}
