/*
	Copyright@ Lalindu Lokuliyana
*/
#include <stdio.h>
 
int main () {
	int m,count;
	//count 1;
	while(1){
		printf("***********************************\n");
		printf("1.Student Registration.\n");
		printf("2.Student Assignments.\n");
		printf("3.Student Termination.\n");
		printf("4.Exit.\n");
		printf("***********************************\n\n");
		printf("Select a choice:");
		scanf("%d",&m);
		switch(m){
			case 1:
				break;
			case 2:
				printf("Handover Assignments......\n");
				break;
			case 3:
				printf("Termination Process......\n");
				break;
			case 4:
				printf("Have a nice day\n");
				return;
		}
	}
}
