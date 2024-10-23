// implemeting the greatest common denominator using a while loop

#include <stdio.h>


int main (void) {

	int 	u, v, temp;
	

	printf("Please enter two non-negative integers.\n");
	scanf("%i%i", &u, &v);

	while(v != 0) {

		temp = u % v;
		u = v;
		v = temp;

	}

	printf("Their greatest common denominator is: %i\n", u);


	return 0;
}
