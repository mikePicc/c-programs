//This program generates a table of 1-10 numbers and their assoicated triangular numbers

#include <stdio.h>

int main (void){ 

	int 	n, triNum = 0;
	
	printf("TABLE OF TRIANGULAR NUMBERS \n\n");
	printf("n	Sum from 1 to n\n");
	printf("---	----------------\n");
	

	for (n = 1; n <= 10; ++n) { 
	
		triNum += n;
		printf("%i	%i\n", n, triNum);

	
	}

	return 0;	
}
