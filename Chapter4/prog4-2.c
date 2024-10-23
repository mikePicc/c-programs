//This chapter has to deal with looping. In this specific program, we're talking about the for loop with triangular numbers (that is, how many dots it'll take to make a traingle)

#include <stdio.h>

int main (void) { 

	int	n, triNumber;
	triNumber = 0;

	for (n = 1; n <= 200; n++) triNumber += n;
	
	printf("The 200th triangular number is %i.\n", triNumber);

	return 0;
} 
