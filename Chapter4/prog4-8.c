// using a while loop to reverse a number and print the reversed number

#include <stdio.h>

int main(void) { 

	int 	num, rightDigit;
	printf("Enter your number for it to be reversed.\n");
	scanf("%i", &num);

	while (num != 0 ){
		rightDigit = num % 10;
		printf("%i", rightDigit);
		num = num /  10;
		
	}

	printf("/n");

	return 0;

}
