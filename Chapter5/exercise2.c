// asks the user to enter 2 integer values and then test to see if the first is divisible by the second 

#include <stdio.h>
#include <stdbool.h>


int main (void) {

	int num1, num2;
	
	
	printf("Please enter two integer values for division. ");
	scanf("%i %i", &num1, &num2);

	printf("\n");


	if (num1 % num2 == 0)	printf("Yes, this is easily divisible and your answer to %i / %i would equal %i \n", num1, num2, num1 / num2);
	else		 	printf("No, this is not easily divisble and you would have a remainder. Sorry. \n");


	return 0;
}
