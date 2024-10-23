#include <stdio.h>

int main (void) {

	int n, two_n = 1;

	printf("TABLE OF THE POWERS OF TWO\n\n");
	printf("n	2^n\n");
	printf("------------\n");


	for (n = 0; n <= 10; ++n){
		printf("%2i	%i\n", n, two_n);
		two_n *= 2;

	}

	return 0;
}
