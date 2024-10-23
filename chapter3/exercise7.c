// Polynomial division 

#include <stdio.h>
#include <math.h>

int main (void) { 

	double top = 3.31e-8 * 2.01e-7;
	double bottom = 7.16e-6 + 2.01e-8;
	double ans = top / bottom;	


	printf("The solution to (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8) is = %g.\n", ans);


	return 0;
}
