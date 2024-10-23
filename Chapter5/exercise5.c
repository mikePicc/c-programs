// remake of prog 4.9 where you have to reverse the digits of an integer, but this time include the negative sign 
// so if the negative sign is in the beginning, then it should end up at the end of the program 


#include <stdio.h>

int main (void) {

	int num, rightDigit;
	printf("Enter a number that you want reversed. \n");
	scanf("%i", &num);

	if (num < 0 ) {
		num = num * -1;
		while (num != 0) {
			rightDigit = num % 10;
			printf("%i", rightDigit);
			num = num / 10;
		
		}
		printf("-");

	}

	else {

		while (num != 0){
		
			rightDigit = num % 10;
			printf("%i", rightDigit);
			num = num / 10;

		}

	}

	printf("\n");


	return 0;
}

