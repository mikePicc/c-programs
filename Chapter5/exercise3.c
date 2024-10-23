// User inputs 2 integers and the program prints the division to 3 decimal places, checking for divide by 0 error

#include <stdio.h>

int main (void) {

	printf("\n");

	int num1, num2;
	printf("Please enter two integer values for divison. ");
	scanf("%i %i", &num1, &num2);

	if (num2 == 0) printf("You cannot divide by 0, try again dummy \n");
	else printf("The division of %i and %i is %.3f  \n", num1, num2, (float) num1 / num2);

	printf("\n");


	return 0;
}
