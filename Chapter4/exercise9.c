//re-write of programs 4.2-4.5 but with using a while loop 


#include <stdio.h>

int main (void) { 

	int n = 1, triNumber;
	triNumber = 0;


	while(n <= 200) {
		triNumber += n;
		++n;
	} 
	
	printf("The 200th triangular number is %i\n", triNumber);

	return 0;
}
