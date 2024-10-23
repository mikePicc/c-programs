#include <stdio.h>

int main(void) {

	int num, remainder;

	printf("Enter your number to be tested if it is even or odd: ");
	scanf("%i", &num);

	remainder = num % 2;

	if (remainder == 0) printf("The number is even.\n");
	else	printf("The number is odd.\n");




	return 0;
}
