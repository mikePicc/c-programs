// User input should be number then operator


#include <stdio.h>


int main (void) {

	printf("\n");
	printf("Begin Calculations\n");
	
	float  number, lastRound = 0.0;
	char c;
	

	scanf("%f  %c", &number, &c);
	printf("\n");



	do {

	switch (c) {
	
		case '+':
			lastRound += number;
			printf("= %.6f \n", lastRound);
			break;

		case '-':
			lastRound -= number;
			printf("= %.6f \n", lastRound);
			break;			

		case '*':
			lastRound *= number;
			printf("= %.6f \n", lastRound);
			break;

		case '/':
			lastRound = lastRound / number;
			printf("= %.6f \n",  lastRound);
			break;

		case 'S':
			lastRound = number;
			printf("= %.6f \n",  lastRound);
			break;	

		default:
			printf("Invalid input...quitting program \n");
			break;
		
	
	}


		scanf("%f  %c", &number, &c);

		
	} while (c != 'E');


	
	printf(" = %.6f \n", lastRound);
	printf("End of Calculations.\n");

	


	return 0;
}
