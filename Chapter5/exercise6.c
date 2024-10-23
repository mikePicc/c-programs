// converts user input integer into that same number but in written english 


/*
ONE VERY IMPORTANT THING TO NOTE:

	this is NOT a correct solution.
 	I just wanted to keep this folly logic here, as a reminder.

  	the idea was to reverse the number, then print the english versionof that number by taking the right most digit first instead of the leftmost digit

    	THE PROBLEM WITH THIS:
     		zero cases. 

       		if you enter 790, it'll print 'seven nine' and not zero 
	 	this is becuase of the mathematics. becuase of my math logic, zero is never caught 


   	SOLUTION IN NEXT FILE: have to use the divisor method to get the rightmost digit

*/

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
