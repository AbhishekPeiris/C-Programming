// bool

/*
   What is bool in C?
   
     In C, Boolean is a data type that contains two types of values,
     i.e., 0 and 1. Basically,
     the bool type value represents two types of behavior, either true or false.
     Here, '0' represents false value, while '1' represents true value. In C Boolean, 
    '0' is stored as 0, and another integer is stored as 1.
*/
#include <stdio.h>
#include <stdbool.h>
int main(){
	
	bool t=true;
	printf("t value %d" , t);// boolen as write the integer type(%d)
	
	return 0;
}