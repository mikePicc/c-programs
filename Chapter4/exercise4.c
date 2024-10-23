// exercise 4 -> write a factorial program
// instead of taking user input, its asking to write a table of factorials from 1-10 

#include <stdio.h>
#include <math.h>

int main (void) {

	printf("TABLE OF FACTORIALS FROM 1 - 10 \n\n");
	printf("n	n!\n");
	printf("----------\n");

	int fact = 0;

	for (int i = 1; i <= 10; i++){
	
		fact = i;

		for (int  j = 1; j < i; j++){
			fact *= j;			
			
		}
		
		printf("%i	%i\n", i, fact);
	
	}


	return 0;
}
