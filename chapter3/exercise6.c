//problem 6 from the book, this is polynomial problem

#include <stdio.h>
#include <math.h>	//added this on my own accord too, was not taught yet in the book


int main(void){ 

	double x = 2.55;

	double equation = (3.0*x*x*x) - (5.0*x*x) + 6.0;

	printf("3x^3 - 5x^2 + 6, with x = %g, equals = %g.\n", x, equation);


	//this is my own code to see what happens 
	printf("------------------------------\n");
	
	double y = 2.55;
	double ans = 3.0 * pow(y, 3) - 5.0 * pow(y, 2) + 6.0;

	printf("now the way that I did it would equate to = %g.\n", ans);


	

	return 0;


}
