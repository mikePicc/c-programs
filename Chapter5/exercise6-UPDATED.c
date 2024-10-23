// converts user input integer into that same number but in written english 

#include <stdio.h>
int main (void) {


	int num, digit, temp, divisor = 1;

	printf("Please enter a number. ");
	scanf("%i", &num);

	//catch inital zero case
	if (num == 0) {
		
		printf("zero");
		return 0;
		
	}

	temp = num;

	while(temp > 9) {

		divisor *= 10;
		temp /= 10;

	}


	while (divisor > 0) {
		digit = num / divisor;
		num = num % divisor;
		divisor /= 10;

		switch (digit) {
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
