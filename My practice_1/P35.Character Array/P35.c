#include <stdio.h>
int main(){
	
	printf("Put the word in the balnks");
	printf("\n==========================\n");
	
	char ans1[10];
	int  ans2;
	char ans3[10];
	char ans4[10];
	char ans5[10];
	
	printf("My name is _______ \n");
	printf("answer := ");
	scanf(" %s" , &ans1);
	
	printf("\n");
	
	printf("I am _____ years old\n");
	printf("answer := ");
	scanf(" %d" , &ans2);
	
	printf("\n");
	
	printf("My ______ name is sandhani\n");
	printf("answer := ");
	scanf(" %s" , &ans3);
	
	printf("\n");
	
	printf("My ______ name is Niwaththaka chethiya maha vidyalaya\n");
	printf("answer := ");
	scanf(" %s" , &ans4);
	
	printf("\n");
	
	printf("How are you\n");
	printf("answer := ");
	scanf(" %s" , &ans5);
	
	printf("\n=============================================================\n");
	printf("\n=============================================================\n");
	
	printf("My name is %s\n" , ans1);
	printf("I am %d years old\n" , ans2);
	printf("My %s name is sandhani\n" , ans3);
	printf("My %s name is Niwaththaka chethiya maha vidyalaya\n" , ans4);
	printf("How are you - %s\n" , ans5);
	
	
	
	
	return 0;
	
	
	
	
	
}
