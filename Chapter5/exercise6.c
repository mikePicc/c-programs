// converts user input integer into that same number but in written english 

#include <stdio.h>
int main (void) {


	int num, digit, temp = 0, tempDigit;

	printf("Please enter a number. ");
	scanf("%i", &num);


	while(num != 0) {

		digit = num % 10;
		num = num / 10; 
		temp = (temp * 10) + digit;

	}

	while (temp != 0) {
		tempDigit = temp % 10;

		switch (tempDigit) {
			case 1: 
				printf("one ");
				break;				

			case 2:
				printf("two ");
				break; 

			case 3:
				printf("three ");
				break;
 
			case 4:
				printf("four ");
				break;

			case 5:
				printf("five ");
				break;

			case 6:
				printf("six ");
				break;

			case 7:
				printf("seven ");
				break;

			case 8:
				printf("eight ");
				break;

			case 9:
				printf("nine ");
				break;

			case 0:
				printf("zero ");
				break;

		}
	
		temp = temp / 10;

	}
	
	printf("\n\n");
	
	return 0;
}
