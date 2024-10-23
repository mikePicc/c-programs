//Reversing a number using a do - while loop
//you want to use a do loop to ensure at least one loop execution occurs 

#include <stdio.h>

int main(void){ 

	int	 num, rightDigit;
	printf("Enter a number that you want reversed.\n");
	scanf("%i", &num);

	do {
		rightDigit = num % 10;
		printf("%i", rightDigit);
		num = num / 10;
	
	
	} while ( num != 0 );

	printf("\n"); 

	return 0;
}
