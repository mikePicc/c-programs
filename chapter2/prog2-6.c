/* This program adds two integer values and displays the results */

#include <stdio.h>

int main(void) { 

	//Declare Variables 
	int val1, val2, sum;

	//Assigns values and calulates their sum 
	val1 = 50;
	val2 = 25;
	sum = val1 + val2;


	//Display the results
	printf("The results of %i and %i is %i\n", val1, val2, sum);
	
	return 0;

}
