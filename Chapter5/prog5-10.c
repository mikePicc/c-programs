#include <stdio.h>

int main (void){

	printf("\n");
	

	// p - testing to see if this number is prime or not 
	// d - this is used to divide p / d to see if that remainder is 0. if it is, then p cannot be prime 

	int p, d;
	_Bool isPrime;

	for (p = 2; p <= 50; ++p){

		isPrime = 1;

		for (d = 2; d < p; ++d){

			if (p % d == 0)		isPrime = 0;
	}

	
	if (isPrime != 0) 	printf("%i ", p);		

	}
	

	
	printf("\n");
	return 0;
}
