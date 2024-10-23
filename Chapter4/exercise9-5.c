//re-make of exercise program4.5 but with using a while loop as per exercise 9

#include <stdio.h>

int main (void) {

	int n = 1, num, triNum = 0,counter = 1;

	while (counter <= 5){

		printf("What triangular number do you want to use? ");
		scanf("%i", &num);

		while ( n <= num) {
			triNum += n;
			++n;
		}

		++counter;
		printf("Triangular number %i is %i\n\n", num, triNum);


	}


	return 0;
}
