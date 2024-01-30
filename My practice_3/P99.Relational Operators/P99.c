#include <stdio.h>
int main(){
	
	int A , B;
	
	printf("Enter A value := ");
	scanf(" %d" , &A);
	
	printf("Enter B value := ");
	scanf(" %d" , &B);
	
	system("cls");
	
	printf("%d == %d ---> %d\n" , A , B , A == B);
	printf("%d != %d ---> %d\n" , A , B , A != B);
	printf("%d >  %d ---> %d\n" , A , B , A > B);
	printf("%d <  %d ---> %d\n" , A , B , A < B);
	printf("%d >= %d ---> %d\n" , A , B , A >= B);
	printf("%d <= %d ---> %d\n" , A , B , A <= B);
	
	return 0;
}
