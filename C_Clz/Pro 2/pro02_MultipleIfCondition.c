/*
	Copyright@ Lalindu Lokuliyana
*/
#include <stdio.h>
 
int main () {
	int m;
	char c;
	printf("Enter the marks:");
	scanf("%d",&m);
	
	if(m>=75){
		c='A';	
	}else if(m>=65){
		c='B';
	}else if(m>=55){
		c='C';
	}else if(m>=35){
		c='S';
	}else{
		c='F';
	}
	printf("The Grade is:%c\n",c);
	
	return 0;
}
