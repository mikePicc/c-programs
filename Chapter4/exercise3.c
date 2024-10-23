// should actually be exercise 2, whoops LOL
// need to generate and display a table of n and n^2 for int values of n ranging from 1-10 


#include <stdio.h>
#include <math.h>

int main (void) {

	printf("TABLE OF N VALUES AND THEIR CORRESPONDING N^2 VALUE\n\n");
	printf("n	n^2\n");
	printf("------------\n");



	for (int i = 1; i <= 10; i++){
		printf("%i	%i\n", i, (int)  pow(i, 2));

	}



	return 0;
}
