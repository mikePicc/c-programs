//re-write of 4-3 using while loops 

#include <stdio.h>

int main (void) {
	
	int n = 1, triNum = 0;

	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf("n	Sum of 1 to n\n");
	printf("-----------------------\n");

	while(n <= 10) {
		triNum += n;
		printf("%i	%i\n", n, triNum);
		++n;

	}
	
	return 0;
}
