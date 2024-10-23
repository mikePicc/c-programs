//Exercise 4 -> convert 27º F to C

#include <stdio.h>

int main(void){ 

	int 	f = 27, c;
	
	c = (f - 32) / 1.8;

	printf("%i ºF is equal to %i ºC.\n", f, c);

	return 0;

}
